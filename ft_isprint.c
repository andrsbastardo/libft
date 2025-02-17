/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:32:21 by usuadmin          #+#    #+#             */
/*   Updated: 2024/03/23 11:31:51 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int arg)
{
	if ((arg >= ' ' && arg <= '~'))
		return (1);
	else
		return (0);
}

/*
  int main()
{
	char	c;

	c='0';
	printf("Result when numeric character is passed: %d", is_print(c));
	c= 1;
	printf("\nResult when non-numeric character is passed: %d", is_print(c));
	return (0);
}
*/
