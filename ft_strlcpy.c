/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:31:31 by abastard          #+#    #+#             */
/*   Updated: 2024/03/23 14:50:15 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	char	*final;

	if (!n)
		return (ft_strlen(src));
	final = (char *)src;
	while ((n > 1) && (*final))
	{
		*dest++ = *final++;
		n--;
	}
	if (*dest)
		*dest = '\0';
	return (ft_strlen(src));
}
