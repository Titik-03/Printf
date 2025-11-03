/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamal <mgamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:49:31 by mgamal            #+#    #+#             */
/*   Updated: 2025/11/03 16:56:14 by mgamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptrhex(unsigned long n)
{
	int		r;
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n > 15)
		count += ft_putptrhex(n / 16);
	r = (n % 16);
	count += ft_putchar(base[r]);
	return (count);
}

int	ft_putptr(void	*ptr)
{
	unsigned long	adress;
	int				count;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	adress = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += ft_putptrhex(adress);
	return (count);
}
