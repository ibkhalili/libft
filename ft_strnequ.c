/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 23:42:34 by ibel-kha          #+#    #+#             */
/*   Updated: 2019/04/20 02:30:52 by ibel-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = -1;
	if (!s1 || !s2)
		return (0);
	while ((*s1 || *s2) && ++i < n)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}
