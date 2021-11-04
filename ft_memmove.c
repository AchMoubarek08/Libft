#include <stdio.h>
#include <string.h>
#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *d;
    char *s;

    s = (char *)src;
    d = (char *)dest;

    i = 0;
    if(d > s)
    {
	    while(n >= 1)
	    {
		    d[n - 1] = s[n - 1];
		    n--;
	    }
        return(d);
    }
    while (i < n && (d || s))
	{
		d[i] = s[i];
		i++;
	}
    return(d);
}

int	main()
{
    char *d = strdup("01234"); 

    //char *s = strdup("achraf");
    //printf("%s\n",(char *)memmove(d + 2 , d, 3));
    printf("%s\n",(char *)ft_memmove(d + 2, d , 3));
}
