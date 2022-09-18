/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:59:54 by inicole-          #+#    #+#             */
/*   Updated: 2022/07/25 12:46:13 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digits(unsigned long n, char *base)
{
	size_t	len;

	if (n < ft_strlen(base))
		return (1);
	len = 0;
	while (n > 0)
	{
		n /= ft_strlen(base);
		len++;
	}
	return (len);
}

char	*ft_putbase(unsigned long n, char *base)
{
	size_t	len;
	char	*pt;

	len = ft_digits(n, base);
	pt = malloc(sizeof(char) * (len + 1));
	if (!pt)
		return (NULL);
	pt[len] = '\0';
	while (--len)
	{
		pt[len] = *(base + (n % ft_strlen(base)));
		n /= ft_strlen(base);
	}
	pt[0] = *(base + (n % ft_strlen(base)));
	return (pt);
}
