#include "libft.h"

/*
char f(unsigned int i, char c)
{
	c = c - 32;
	return(c);
}
*/
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *str;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	while(s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
	char *str = "achraf";
	printf("%s", ft_strmapi(str, f));
}
*/
