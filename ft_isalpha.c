/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:36:13 by ibel-kha          #+#    #+#             */
/*   Updated: 2019/04/19 19:36:39 by ibel-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		return (0);
	return (1);
}
