#include "libft.h"
#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	char *f;
	f = s;
	while(f[i] && i < n)
	{
		f[i] = '\0';
		i++;
	}
}

#include <stdio.h>
int main()
{
	char *s = strdup("barcalona");
	ft_bzero(s, 6);

	printf("%s",s + 5);
	
}
