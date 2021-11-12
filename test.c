#include "libft.h"

int main()
{
		char *s1 = "  \t \t \n";
        char *s2 = "";
        char *ret = ft_strtrim(s1, " \n\t");
		printf("%s", ret);
}
	