/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:35:48 by amsilva           #+#    #+#             */
/*   Updated: 2024/12/04 12:57:29 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *str)
{
	int				c;
	unsigned long	*p;

	c = 0;
	p = (unsigned long *)str;
	if (!str)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		write(1, "0x", 2);
		c += 2;
		c += ft_printhex((unsigned long)p, 'x');
	}
	return (c);
}
