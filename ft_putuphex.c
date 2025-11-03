/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamal <mgamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:45:16 by mgamal            #+#    #+#             */
/*   Updated: 2025/11/03 16:20:22 by mgamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putluphex(unsigned int n)
{
	char	r;
	char	*base;
	int		count;

	base = "0123456789ABCDEF";
	count = 0;
	if (n > 15)
		count += ft_putluphex(n / 16);
	r = (n % 16);
	count += ft_putchar(base[r]);
	return (count);
}
