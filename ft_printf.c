/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:46:41 by amsilva           #+#    #+#             */
/*   Updated: 2024/12/04 12:54:04 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	char	*strchr(const char *str, int c)
{
	int	b;

	b = 0;
	while (str[b])
	{
		if (str[b] == c)
			return ((char *)&str[b]);
		b++;
	}
	if (str[b] == c)
		return ((char *)&str[b]);
	return (0);
}

static int	find(char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(arg, int)));
	if (c == 'x' || c == 'X')
		return (ft_printhex(va_arg(arg, unsigned int), c));
	if (c == 'p')
		return (ft_printptr(va_arg(arg, void *)));
	if (c == 'u')
		return (ft_printunnmb(va_arg(arg, unsigned int)));
	return (ft_putchar(c));
}

int	ft_printf(const char *src, ...)
{
	va_list	arg;
	int		i;
	int		c;

	va_start(arg, src);
	i = 0;
	c = 0;
	while (src[i])
	{
		if (src[i] == '%' && strchr("cspdiuxX%", src[i + 1]))
		{
			i++;
			c += find(src[i], arg);
		}
		else
			c += ft_putchar(src[i]);
		i++;
	}
	va_end(arg);
	return (c);
}
/* 
int main()
{
	char a = 'a';
	write(1, "ft_c:\n",6);
	printf("Minha:\n");
	printf("%d\n", ft_printf("%c\n", a));
	printf("Original:\n");
	printf("%d\n", printf("%c\n", a));
	printf("\n\n");
	
	char *b = "OLA";
	write(1, "ft_s:\n",6);
	printf("Minha:\n");
	printf("%d\n", ft_printf("%s\n", b));
	printf("Original:\n");
	printf("%d\n", printf("%s\n", b));
	printf("\n\n");

	int c = -42;
	write(1, "ft_i:\n",6);
	printf("Minha:\n");
	printf("%d\n", ft_printf("%i\n", c));
	printf("Original:\n");
	printf("%d\n", printf("%i\n", c));
	printf("\n\n");
	
	unsigned	int x = 10;
	write(1, "ft_x:\n",6);
	printf("Minha:\n");
	printf("%d\n", ft_printf("%x\n", x));
	printf("Original:\n");
	printf("%d\n", printf("%x\n", x));
	printf("\n\n");

	unsigned	int X = 10;
	write(1, "ft_X:\n",6);
	printf("Minha:\n");
	printf("%d\n", ft_printf("%X\n", X));
	printf("Original:\n");
	printf("%d\n", printf("%X\n", X));
	printf("\n\n");

	char *d = "10";
	write(1, "ft_p:\n",6);
	printf("Minha:\n");
	printf("%d\n", ft_printf("%p\n", d));
	printf("Original:\n");
	printf("%d\n", printf("%p\n", d));
	printf("\n\n");

	unsigned	int e = -42174612;
	write(1, "ft_u:\n",6);
	printf("Minha:\n");
	printf("%d\n", ft_printf("%u\n", e));
	printf("Original:\n");
	printf("%d\n", printf("%u\n", e));
	printf("\n\n");

	int f = -42;
	write(1, "ft_d:\n",6);
	printf("Minha:\n");
	printf("%d\n", ft_printf("%d\n", f));
	printf("Original:\n");
	printf("%d\n", printf("%d\n", f));
	printf("\n\n");

	write(1, "ft_%:\n",6);
	printf("Minha:\n");
	printf("%d\n", ft_printf("%%\n"));
	printf("Original:\n");
	printf("%d\n", printf("%%\n"));
	printf("\n\n");
} */