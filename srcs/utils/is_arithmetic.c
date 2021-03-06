/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_arithmetic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niguinti <0x00fi@protonmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:18:51 by niguinti          #+#    #+#             */
/*   Updated: 2020/02/25 17:21:45 by niguinti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_arithmetic(char *w)
{
	size_t	i;

	i = 1;
	while (w[i] && i < 3)
	{
		if (w[i] == '(')
			return (1);
		i++;
	}
	return (0);
}
