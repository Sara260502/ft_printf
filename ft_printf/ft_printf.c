/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szicchie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:08:43 by szicchie          #+#    #+#             */
/*   Updated: 2022/02/09 15:42:00 by szicchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_detect(char flag, va_list ap, int *count)
{
	if (flag == CHAR)
		ft_putchar(va_arg(ap, int), count);
	else if (flag == STRING)
		ft_putstr(va_arg(ap, char *), count);
	else if (flag == INTEGER || flag == DECIMAL)
		ft_putnbr(va_arg(ap, int), count);
	else if (flag == UNSIGNED || flag == HEXAUPPER || flag == HEXALOWER)
		ft_putunsigned(va_arg(ap, unsigned int), flag, count);
	else if (flag == ADDRESS)
		ft_putad(va_arg(ap, unsigned long int), count);
	else
		*count += write(1, &flag, 1);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		count;

	count = 0;
	i = -1;
	if (s == NULL)
		return (EXIT_ERROR);
	va_start(ap, s);
	while (s[++i])
	{
		if (s[i] == PERCENT)
			ft_format_detect(s[++i], ap, &count);
		else
			count += write(1, s + i, 1);
	}
	return (va_end(ap), count);
}
