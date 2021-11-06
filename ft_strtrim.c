#include "libft.h"
int ft_start(char const *s1, char const *set)
{
	int i;

	i = 0;
	while(ft_strchr(set, s1[i]))
	{
		i++;
	}
	return(i);
}
int ft_end(char const *s1, char const *set)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s1);
	while(ft_strchr(set , s1[len - 1]))
	{
		len--;
	}
	return(len);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char *str;

	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if( !(s1))
		return (NULL);
	if(


}

//char *str = "cccachrafccc";
//char c = 'c';
/*char *ft_strtrim(char const *s1, char const *set)
{
	
}
*/

