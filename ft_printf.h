/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:12:56 by amsilva           #+#    #+#             */
/*   Updated: 2024/12/04 13:03:17 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h> //Library for handling variable arguments in functions.
# include <limits.h> //Library for INT_MAX.

int	ft_printf(const char *src, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_printhex(unsigned long n, char c);
int	ft_printptr(void *str);
int	ft_printunnmb(unsigned int n);

#endif