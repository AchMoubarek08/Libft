#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if(str == 0)
		return(0);

	while(s1[i])
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while(s2[i])
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return(str);
}
