/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:26:26 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/22 23:19:23 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_p(unsigned long ptr)
{
	int	count;

	if (!ptr)
		return (ft_put_s("(null)"));
	count = 0;
	count += ft_put_s("0x");
	count += ft_put_x(ptr, 'x');
	return (count);
}
