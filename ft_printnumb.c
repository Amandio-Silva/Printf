/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:20:58 by amsilva           #+#    #+#             */
/*   Updated: 2024/12/04 12:56:25 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		c;
	long	l;

	c = 0;
	l = n;
	if (n < 0)
	{
		c += ft_putchar('-');
		l = -l;
	}
	if (l < 10)
		c += ft_putchar(l + 48);
	if (l > 9)
	{
		c += ft_putnbr(l / 10);
		c += ft_putnbr(l % 10);
	}
	return (c);
}
/* int main()
{
	 ft_putnbr(-42);
} */