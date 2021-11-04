#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
	const char *str;
	int i;

	str = s;
	i = 0;
	while(n != 0)
	{
		if(str[i] == (unsigned char)c)
			return ((char *)str + i);
		n--;
		i++;
	}
	return(0);
}

