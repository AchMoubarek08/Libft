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
	str = (char *)malloc(sizeof(char) * end - start + 1);
	if  (str == NULL)
		return (0);
	ft_strlcpy(str, s1 + start, end - start + 1);
	str[end - start + 1] = '\0';
	return(str);
}
//char *str = "cccachrafccc";
//char c = 'c';
/*char *ft_strtrim(char const *s1, char const *set)
{
	
}
*/

