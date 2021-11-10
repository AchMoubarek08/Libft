#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (ft_strlen(s) < start || len == 0)
		return (ft_strdup(""));
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[i])
	{
		if(j < len && i >= start)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return(str);
}
