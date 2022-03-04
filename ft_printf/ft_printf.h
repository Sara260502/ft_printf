/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szicchie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:08:50 by szicchie          #+#    #+#             */
/*   Updated: 2022/02/09 15:44:16 by szicchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

void	ft_format_detect(char flag, va_list ap, int *count);
int		ft_printf(const char *str, ...);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putchar(char c, int *count);
void	ft_putunsigned(unsigned int nb, char base, int *count);
void	ft_putad(unsigned long int nb, int *count);
int		ft_strlen(char *str);

/*macros*/
# define STRING 's'
# define CHAR 'c'
# define UNSIGNED 'u'
# define ADDRESS 'p'
# define HEXALOWER 'x'
# define HEXAUPPER 'X'
# define DECIMAL 'd'
# define INTEGER 'i'
# define PERCENT '%'
# define EXIT_ERROR -1
# define STR_HEXA_LOWER "0123456789abcdef"
# define STR_HEXA_UPPER "0123456789ABCDEF"
# define STR_DECIMAL "0123456789"
# define WRITE_NULL "(null)"

#endif
