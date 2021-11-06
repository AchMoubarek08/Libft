#include "libft.h"

int lettres(char const *s, char c)
{
	int i;
	int countL;

	countL = 0;
	i = 0;
	while(s[i])
	{
		while(s[i] == c && s[i])
			i++;
		while(s[i] != c && s[i])
		{
			i++;
			countL++;
		}
		return(countL);
	}
	return(0);
}
/*
int strings(char *s, char c)
{
	int i;
	int countS;

	i = 0;
	countS = 0;
	while(s[i])
	{
		while(s[i] == c && s[i])
		{
			i++;
		}
		countS++;
		while(s[i] != c && s[i])
		{
			i++;
		}
	}
	return (countS);
}

char **ft_split(char *s, char c)
{
	int i;
}
*/
#include <stdio.h>
int main()
{
	char *str = "   achraf messi barcalona kkkk     k    k k";
	char c = ' ';
	printf("%d",lettres(str, c));
}
