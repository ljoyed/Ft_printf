/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:26:47 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/22 23:01:22 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb < 10)
		count += ft_put_c(nb + '0');
	else
	{
		count += ft_put_u(nb / 10);
		count += ft_put_u(nb % 10);
	}
	return (count);
}
