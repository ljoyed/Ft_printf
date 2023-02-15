/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:25:45 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/30 12:25:37 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>

int		ft_put_c(char c);
int		ft_put_s(char *str);
int		ft_put_i(long nb);
int		ft_put_u(unsigned int nb);
int		ft_put_x(unsigned long nb, char c);
int		ft_put_p(unsigned long ptr);
char	ft_istype(char a);
int		ft_printf(const char *str, ...);

#endif