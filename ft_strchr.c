#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if ((char)c == '\0' || s[i] == '\0')
		return (0);
	while(s[i])
	{
		if(s[i] == (char)c)
			return (char *)s+i;
		i++;
	}
		return NULL;
}
