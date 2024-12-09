/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:27:08 by amsilva           #+#    #+#             */
/*   Updated: 2024/12/04 12:55:04 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long n, char c)
{
	int	count;

	count = 0;
	if (n < 10)
		count += ft_putchar(n + 48);
	if (n > 9 && n < 16)
	{
		if (c == 'x')
			count += ft_putchar(n + 87);
		else
			count += ft_putchar(n + 55);
	}
	if (n > 15)
	{
		count += ft_printhex((n / 16), c);
		count += ft_printhex((n % 16), c);
	}
	return (count);
}
