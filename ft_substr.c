#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	while(s[i])
	{
		if(i < len && i >= start)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[i] = '\0';
	return(str);
}
