#include "libft.h"
void *ft_calloc(size_t nmemb, size_t size)
{
	char *s;
	s = "ach";
	size_t len;

	len = ft_strlen(s);
	if(!(s = (char *)malloc(sizeof(char) * len + 1)))
		return(0);
	memset(s, 0, nmemb * size);
	return(s);
}
