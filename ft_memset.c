#include "libft.h"
void *ft_memset (void *s, int c, size_t n)
{
	size_t i;
	char *str;

	i = 0;
	str = s;
	while(n != 0)
	{
		str[i] = (char)c;
		n--;
		i++;
	}
	return (s);
}
