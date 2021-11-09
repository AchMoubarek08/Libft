#include "libft.h"
void ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	char *f;
	f = s;
	while(i < n)
	{
		f[i] = '\0';
		i++;
	}
}
