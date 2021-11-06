#include "libft.h"

int lettres(char const *s, char c)
{
	int i;
	int countL;
	int	b;
	char **str;
	b = 0;

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
		str[b][countL] = 0;
		countL = 0;
		b++;

	}
	return(0);

}
int strings(char const *s, char c)
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
	int j;
	int s;
	int l;
	char **str;

	i = 0;
	j = 0;
	l = lettres(s, c);
	s = strings(s, c);
	str = (char *)malloc(sizeof(char *) * s + 1);
	str[i + 1] = NULL;
	while(i <= s)
	{
		str[j][l] = s[i]
		i++;
	}

}
#include <stdio.h>
int main()
{
	char *str = "   achraf messi barcalona kkkk     k    k k";
	char c = ' ';
	printf("%d",lettres(str, c));
}
