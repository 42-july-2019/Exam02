/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 19:11:40 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 19:49:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int			is_neg;
	int			length;
	long int	nb;
	long int	curr_nbr;
	int			i;
	char		*result;

	if (nbr == 0)
	{
		if (!(result = (char *)malloc(sizeof(char) * 1  + 1)))
			return (0);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	is_neg = nbr < 0 ? 1 : 0;
	nb = nbr;
	nb = is_neg ? nb * -1 : nb;
	curr_nbr = nb;
	length = 0;
	while (curr_nbr != 0)
	{
		curr_nbr = curr_nbr / 10;
		length++;
	}
	result = 0;
	if (!(result = (char *)malloc(sizeof(char) * (length + is_neg) + 1)))
		return (0);
	if (is_neg)
		result[0] = '-';
	i = 0;
	curr_nbr = nb;
	while (curr_nbr != 0)
	{
		result[length - 1 + is_neg - i] = (curr_nbr % 10) + '0';
		curr_nbr = curr_nbr / 10;
		i++;
	}
	result[length + is_neg] = '\0';
	return (result);
}
