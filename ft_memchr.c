#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	int i;

	str = (char *)s;
	i = 0;
	if(c == 0 && n == 0)
		return(NULL);
	while(n != 0)
	{
		if(str[i] == (char)c)
			return (str + i);
		n--;
		i++;
	}
	return(0);
}

