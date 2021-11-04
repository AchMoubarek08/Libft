#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
char *ft_strdup(const char *s)
{
	int i;
	char *m;
	int len;

	i = 0;
	len = ft_strlen(s);
	m = (char *)malloc(sizeof(char) * len + 1);
	if( m == NULL)
		return(0);
	while(s[i])
	{
		m[i] = s[i];
		i++;	
	}
	m[i] = '\0';
	return(m);
}
int main()
{
	// ft_strdup("achraf");
	printf("%s", ft_strdup("achraf"));


}
