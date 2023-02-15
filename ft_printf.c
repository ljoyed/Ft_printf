/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:25:25 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/30 12:33:36 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_mainprintf(char ph, va_list args)
{
	int	len;

	len = 0;
	if (ph == '%')
		len = ft_put_c('%');
	else if (ph == 'c')
		len = ft_put_c(va_arg(args, int));
	else if (ph == 's')
		len = ft_put_s(va_arg(args, char *));
	else if (ph == 'i' || ph == 'd')
		len = ft_put_i(va_arg(args, int));
	else if (ph == 'u')
		len = ft_put_u(va_arg(args, unsigned int));
	else if (ph == 'x' || ph == 'X')
		len = ft_put_x(va_arg(args, unsigned int), ph);
	else if (ph == 'p')
		len = ft_put_p(va_arg(args, unsigned long));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && ft_istype(str[i + 1]))
			count += ft_mainprintf(str[i++ + 1], args);
		else if (str[i] == '%' && ft_istype(str[i + 1] == 0))
		{
			write(1, "Error\n", 6);
			return (count);
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return ((int)count);
}
