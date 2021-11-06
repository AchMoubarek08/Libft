#include "libft.h"
int main()
{
	char const *s1 = "///--hello-- \\//";
	char const *set = " //---";

	printf("%d", ft_end(s1, set));
}
