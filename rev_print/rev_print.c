/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:10:33 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 18:15:59 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int		i;
	int		length;
	char	temp;
	char	*str;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	length = 0;
	str = argv[1];
	while (str[length])
		length++;
	i = 0;
	while(i < length / 2)
	{
		temp = str[length -1 - i];
		str[length - 1 - i] = str[i];
		str[i] = temp;
		i++;
	}
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
	return (0);
}
