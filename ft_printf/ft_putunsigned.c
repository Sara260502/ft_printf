/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szicchie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:55:28 by szicchie          #+#    #+#             */
/*   Updated: 2022/02/04 15:55:30 by szicchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb, char base, int *count)
{
	unsigned int	base1;

	if (base == 'u')
		base1 = 10;
	else
		base1 = 16;
	if (nb >= base1)
		ft_putunsigned(nb / base1, base, count);
	if (base == HEXALOWER)
		*count += write(1, &STR_HEXA_LOWER[nb % base1], 1);
	else if (base == HEXAUPPER)
		*count += write(1, &STR_HEXA_UPPER[nb % base1], 1);
	else
		*count += write(1, &STR_DECIMAL[nb % base1], 1);
}
