#include <stddef.h>
#include "libft.h"
char *ft_strnstr(const char *str, const char *to_find, size_t n)
{
	
	size_t i;
	size_t j;

	i = 0;
	if(*to_find == '\0')
		return (0);
	while (str[i])
	{
		j = 0;
		if(str[i] == to_find[j])
		{
			while(str[i] && str[i + j] == to_find[j] && i + j < n)
			{
				j++;
				if(to_find[j] == '\0')
					return((char *)str + i);
			}
		}
		i++;
	}
	return (0);

}
#include <string.h>
#include <stdio.h>
int main()
{
	const char str[] = "barcalona";
	const char sttr[] = "lo";
	printf("%s", ft_strnstr(str, sttr,8));

}
