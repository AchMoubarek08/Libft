#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;
	size_t i;
	int z;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (n == 0)
		return(0);

	while(a[i] == b[i] && i < n - 1)
		i++;

	z = a[i] - b[i];

	if( z > 0)
		return(1);
	if ( z < 0)
		return(-1);
	return(0);
}
