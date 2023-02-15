/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:26:58 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/22 22:53:16 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_x(unsigned long nb, char c)
{
	char	*base;
	int		count;

	count = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (nb < 16)
		count += ft_put_c(base[nb]);
	else
	{
		count += ft_put_x(nb / 16, c);
		count += ft_put_x(nb % 16, c);
	}
	return (count);
}
