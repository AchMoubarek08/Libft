#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	const unsigned char *sc;
	unsigned char *dt;
	
	i = 0;
	sc = (const unsigned char *)src;
	dt = (unsigned char *)dest;
	if(src == dest)
	       return(dest);

	if(src == NULL && dest == NULL)
		return(NULL);

	while(i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return(dest);

}
int main()
{
	char *src = strdup("messi");
	char *dest = strdup("133ii7");
	printf("%s",(unsigned char *)ft_memcpy(dest, src, 3));
}
