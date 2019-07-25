/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:17:53 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 18:21:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strrev(char *str)
{
	int		i;
	int		length;
	char	temp;

	length = 0;
	while(str[length])
		length++;
	i = 0;
	while (i < length / 2)
	{
		temp = str[length - 1 -i];
		str[length - 1 - i] = str[i];
		str[i] = temp;
		i++;
	}
	return (str);
}
