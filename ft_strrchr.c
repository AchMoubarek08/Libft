
#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
	int len_s;
	len_s = ft_strlen(s);

	while(len_s != 0)
	{
		if(s[len_s] == (char) c)
			return((char *)s + len_s);
		

		len_s--;
	}
	return NULL;
}
int main(void)
{
	char *s = "achrfaafchfraf0x";
	char c = 'f';
	printf("%s", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
}
