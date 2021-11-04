#include <stddef.h>
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
#include <stdio.h>
#include <string.h>
int main()
{
	char *str = strdup("hahahahaha");
	char c = 'f';
	printf("%s",(char *)ft_memset (str, c, 8));

}
