#include "libft.h"
int counter(int n) 
{
	int count;

	count = 0;
	if (n < 0)
		n *= -1;
	while(n)
	{
			count++;
			n = n / 10;
	}
	return(count);
}
char *minMax(int n , char *str)
{	
	if ( n == -2147483648)
	{
		str = malloc(sizeof(char) * 12);
		str = "-2147483648";
		return(str);
	}
	return NULL;
}

char *negative(int *n, char *str, int count)
{
	*n = *n * -1;
	str = malloc(sizeof(char) * count + 2);
	str[0] = '-';
	return (str);
}
char *ft_itoa(int n)
{
	char *str;
	int i;
	int count;

	i = 0;
	if (n == -2147483648)
		return (minMax(n, str));
	count = counter(n);
	if(n < 0)
	{
		str = negative(&n, str, count);
		i++;
	}
	else
		str = malloc(sizeof(char) * count + 1);
	str[count + i] = 0;
	i = count - 1 + i;
	while(n != 0)
	{
		str[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return(str);
}
