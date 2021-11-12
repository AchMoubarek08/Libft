#include "libft.h"

int main()
{
        int i;
        i = 0;
		char *s1 = "  jjjj    jj jjjjj   ";
        char c = ' ';
        char **ret = ft_split(s1, c);
        while(ret[i])
        {
            printf("%s\n", ret[i++]);
        }

}
	