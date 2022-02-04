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
	if (nb >= BASE)
		ft_putunsigned(nb / BASE, base, count);
	if (base == HEXALOWER)
		*count += write(1, &STR_HEXA_LOWER[nb % BASE], 1);
	else if (base == HEXAUPPER)
		*count += write(1, &STR_HEXA_UPPER[nb % BASE], 1);
	else
		*count += write(1, &STR_DECIMAL[nb % BASE], 1);
}
