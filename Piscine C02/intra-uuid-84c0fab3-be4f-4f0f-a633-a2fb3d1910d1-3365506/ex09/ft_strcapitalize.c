/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalvemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:19:37 by asalvemi          #+#    #+#             */
/*   Updated: 2020/10/28 19:19:40 by asalvemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 ||
			(str[i - 1] >= 0 && str[i - 1] <= 47) ||
			(str[i - 1] >= 58 && str[i - 1] <= 64) ||
			(str[i - 1] >= 91 && str[i - 1] <= 96) ||
			(str[i - 1] >= 123 && str[i - 1] <= 127)) &&
			(str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (!(i == 0 ||
			(str[i - 1] >= 0 && str[i - 1] <= 47) ||
			(str[i - 1] >= 58 && str[i - 1] <= 64) ||
			(str[i - 1] >= 91 && str[i - 1] <= 96) ||
			(str[i - 1] >= 123 && str[i - 1] <= 127)) &&
				(str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
