/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:48:02 by inicole-          #+#    #+#             */
/*   Updated: 2022/07/25 12:14:13 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *p)
{
	char	*s;
	int		n;

	if (!p)
		return (write(1, "(nil)", 5));
	s = ft_putbase((unsigned long)p, HEXADECIMAL_BASE);
	n = write(1, "0x", 2);
	n += ft_print_string(s);
	free(s);
	return (n);
}
