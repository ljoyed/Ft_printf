/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:26:38 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/22 23:05:23 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_s(char *str)
{
	int	i;

	if (!str)
		return (ft_put_s("(null)"));
	i = 0;
	while (str[i])
	{
		ft_put_c(str[i]);
		i++;
	}
	return (i);
}
