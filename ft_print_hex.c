/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:47:55 by inicole-          #+#    #+#             */
/*   Updated: 2022/07/25 12:14:46 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int ui)
{
	char	*s;
	int		n;

	s = ft_putbase((unsigned long)ui, HEXADECIMAL_BASE);
	n = ft_print_string(s);
	free(s);
	return (n);
}
