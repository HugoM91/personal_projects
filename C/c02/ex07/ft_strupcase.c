/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmalaqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 08:01:38 by hmalaqui          #+#    #+#             */
/*   Updated: 2020/12/04 12:30:18 by hmalaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'a' && *(str + i) <= 'z'))
		{
			*(str + i) = *(str + i) - 32;
		}
		else
		{
			*(str + i) = *(str + i);
		}
		i++;
	}
	return (str);
}
