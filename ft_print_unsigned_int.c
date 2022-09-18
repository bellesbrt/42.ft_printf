/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:48:05 by inicole-          #+#    #+#             */
/*   Updated: 2022/07/25 12:46:31 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int ui)
{
	char	*s;
	int		n;

	s = ft_putbase((unsigned long)ui, DECIMAL_BASE);
	n = ft_print_string(s);
	free(s);
	return (n);
}
