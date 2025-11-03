/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrun.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamal <mgamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:10:09 by mgamal            #+#    #+#             */
/*   Updated: 2025/11/03 16:20:07 by mgamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrun(unsigned int n)
{
	char	r;
	int		count;

	count = 0;
	if (n > 9)
		count += ft_putnbrun(n / 10);
	r = (n % 10 + 48);
	count += ft_putchar(r);
	return (count);
}
