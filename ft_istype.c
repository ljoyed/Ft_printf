/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:25:08 by loandrad          #+#    #+#             */
/*   Updated: 2023/01/30 12:32:29 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_istype(char a)
{
	int		i;
	char	*cases;

	i = 0;
	cases = "cspdiuxX%";
	while (cases[i] != '\0')
	{
		if (cases[i] == a)
			return (cases[i]);
		i++;
	}
	return (0);
}
