/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:26:13 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/22 23:13:17 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_i(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count += ft_put_c('-');
	}
	if (nb < 10)
	{
		count += ft_put_c(nb + '0');
	}
	else
	{
		count += ft_put_i(nb / 10);
		count += ft_put_i(nb % 10);
	}
	return (count);
}
