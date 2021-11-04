#include "libft.h"
int ft_toupper(int c) 
{
	if( c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	return (c);
}
#include <stdio.h>
int main(void)
{
	char a = 'a';
	printf("%c", ft_toupper(a));
}
