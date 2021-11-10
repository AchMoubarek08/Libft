#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	int j;

	i = 0;
	j = 0;

	size_t lenD = ft_strlen(dst);
	size_t lenS = ft_strlen(src);
	if(!dst || !src)
		return(0);
	while(dst[i])
	{
		i++;
	}
	if (size > 0)
	{
		while(src[j] && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	dst[i] = '\0';
	}
	if(size < lenD)
		return (size + lenS);
	return(lenD + lenS);
}

