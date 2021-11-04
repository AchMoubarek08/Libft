#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if(!src || !dest)
		return (0);
	while ( src[i] &&  i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ( strlen(src));

}
int main()
{
	char *src =strdup("achraff");
	char dest[10] = "achra";
	printf("%lu\n",ft_strlcpy(dest, src, 7));
	printf("%s\n", dest);
}

