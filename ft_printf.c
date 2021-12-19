/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:11:04 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/19 14:29:13 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	va_start (ptr, f);
	i = 0;
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			count += check1(f[i],ptr);
			
		}
		count += ft_putchar(f[i]);
		i++;
	}
}
