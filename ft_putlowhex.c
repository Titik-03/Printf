/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamal <mgamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:41:15 by mgamal            #+#    #+#             */
/*   Updated: 2025/11/03 16:20:00 by mgamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlowhex(unsigned int n)
{
	char	r;
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n > 15)
		count += ft_putlowhex(n / 16);
	r = (n % 16);
	count += ft_putchar(base[r]);
	return (count);
}
