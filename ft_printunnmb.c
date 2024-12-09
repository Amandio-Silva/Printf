/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunnmb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:15:04 by amsilva           #+#    #+#             */
/*   Updated: 2024/12/04 12:59:02 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunnmb(unsigned int n)
{
	int	c;

	c = 0;
	if (n < 10)
	{
		c += ft_putchar(n + 48);
	}
	if (n > 9)
	{
		c += ft_printunnmb(n / 10);
		c += ft_printunnmb(n % 10);
	}
	return (c);
}
