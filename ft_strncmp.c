#include <stddef.h>
#include <string.h>
#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while(s1[i] && s2[i] && i < n)
	{
		if( s1[i] != s2[i])
			return ( s1[i] - s2[i]);
		i++;
	}
	return ( s1[i] - s2[i]);
}
#include <stdio.h>
int main()
{
	char *s1 = "ac";
	char *s2 = "ach";
	printf("%d\n",ft_strncmp(s1, s2, 5));
	printf("%d", strncmp(s1, s2, 5));

}
