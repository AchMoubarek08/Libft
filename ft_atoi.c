#include "libft.h"
int ft_atoi(const char *str)
{
	int i;
	int a;
	int k;

	k = 0;
	a = 1;
	i = 0;
	while(str[i] <= 32)
		i++;
	if(str[i] == '-' )
	{			
		a = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 + str[i] - '0';
		i++;
	}
	return ( k * a);
}
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char *str ="  123j45";
	printf("%d\n", atoi(str));
	printf("%d", ft_atoi(str));

}
