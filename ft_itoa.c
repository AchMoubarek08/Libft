/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 05:05:27 by amoubare          #+#    #+#             */
/*   Updated: 2021/11/12 05:05:37 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		n *= -1;
	while (n)
	{
			count++;
			n = n / 10;
	}
	return (count);
}

char	*minmax(int n, char *str)
{
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	return (NULL);
}

char	*negative(int *n, char *str, int count)
{
	*n = *n * -1;
	str = malloc(sizeof(char) * count + 2);
	if (str == NULL)
		return (0);
	str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		count;

	str = NULL;
	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (minmax(n, str));
	count = counter(n);
	if (n < 0 && ++i)
		str = negative(&n, str, count);
	else
		str = malloc(sizeof(char) * count + 1);
	if (str == NULL)
		return (0);
	str[count + i] = 0;
	i = count - 1 + i;
	while (n != 0)
	{
		str[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (str);
}
