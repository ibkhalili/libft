/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 21:35:35 by ibel-kha          #+#    #+#             */
/*   Updated: 2019/04/22 15:57:38 by ibel-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if (s == 0 || f == 0)
		return ;
	while (s[i])
	{
		(*f)(&s[i]);
		i++;
	}
}
