/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmalaqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:23:22 by hmalaqui          #+#    #+#             */
/*   Updated: 2020/12/01 16:17:29 by hmalaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char c;

	c = '0';
	while (c >= '0' && c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}