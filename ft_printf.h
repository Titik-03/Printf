/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamal <mgamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:06:39 by mgamal            #+#    #+#             */
/*   Updated: 2025/11/03 16:08:00 by mgamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stddef.h>
# include <stdint.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbrun(unsigned int n);
int	ft_putluphex(unsigned int n);
int	ft_putlowhex(unsigned int n);
int	ft_putptr(void *ptr);
int	ft_printf(const char *format, ...);
#endif