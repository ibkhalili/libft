/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 23:17:21 by ibel-kha          #+#    #+#             */
/*   Updated: 2019/04/19 20:02:18 by ibel-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	int		test;
	int		str_size;
	char	*nbr;

	if (n == -2147483648)
	{
		nbr = ft_strdup("-2147483648");
		return (nbr);
	}
	size = ft_nbr_size(&n, &test, &str_size);
	nbr = (char *)malloc(sizeof(char) * (str_size + 2));
	if (nbr == NULL)
		return (NULL);
	if (test == 1)
		nbr[0] = '-';
	while (size != 0)
	{
		nbr[test++] = (n / size) + 48;
		n %= size;
		size /= 10;
	}
	nbr[test] = '\0';
	return (nbr);
}
