/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamal <mgamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:19:03 by mgamal            #+#    #+#             */
/*   Updated: 2025/11/03 16:20:17 by mgamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	while (s[i])
	{
		count += write(1, &s[i], 1);
		i++;
	}
	return (count);
}
