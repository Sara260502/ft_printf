/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szicchie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:54:23 by szicchie          #+#    #+#             */
/*   Updated: 2022/02/04 15:54:32 by szicchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlong(unsigned long int nb, int *count)
{
	if (nb >= 16)
		ft_putlong(nb / 16, count);
	*count += write(1, &STR_HEXA_LOWER[nb % 16], 1);
}

void	ft_putad(unsigned long int nb, int *count)
{
	*count += write(1, "0x", 2);
	ft_putlong(nb, count);
}
