/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:47:06 by inicole-          #+#    #+#             */
/*   Updated: 2022/07/25 11:52:22 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int ui)
{
	char	*s;
	int		n;

	s = ft_putbase((unsigned long)ui, HEXADECIMAL_BASE);
	n = 0;
	while (s[n])
	{
		s[n] = (char)ft_toupper((int)s[n]);
		n++;
	}
	n = ft_print_string(s);
	free(s);
	return (n);
}
