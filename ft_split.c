#include "libft.h"
char **remplir(char const *s, char c, char **str)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	i = 0;
	while(s[k])
	{
		while(s[k] == c && s[k])
		{
			k++;
		}
		while(s[k] != c && s[k])
		{
			str[i][j] = s[k];
			k++;
			j++;
		}
		i++;
		j = 0;
	}
	return(str);	
}
char **lettres(char const *s, char c, char **str)
{
	int i;
	int countL;
	int	b;

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
		str[b] = (char *)malloc(sizeof(char) * countL + 1); 
		str[b][countL] = 0;
		countL = 0;
		b++;
	}
	return(remplir(s, c, str));
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
	int st;
	char **str;

	st = strings(s, c);
	str = malloc(sizeof(char *) * st + 1);
	str[st] = NULL;
	return (lettres(s, c, str));
}
