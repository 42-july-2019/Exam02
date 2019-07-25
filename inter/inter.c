/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:25:52 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 18:59:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		str_cmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (str1 - str2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		length1;
	int		length2;
	int		length;
	int		count;
	char	*str1;
	char	*str2;
	char	*inter;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	str1 = argv[1];	
	str2 = argv[2];
	length1 = 0;
	length2 = 0;
	while (str1[length1])
		length1++;
	while (str2[length2])
		length2++;
	length = (length1 < length2 ? length1 : length2);
	inter = 0;
	if (!(inter = (char *)malloc(sizeof(char) * length + 1)))
		return (0);
	i = 0;
	while (i < length)
	{
		inter[i] = '\0';
		i++;
	}
	count = 0;
	while (*str1)
	{
		j = 0;
		while (str2[j])
		{
			if (*str1 == str2[j])
			{
				i = 0;
				while (i < length && inter[i] != *str1)
					i++;
				if (i == length)
				{
					inter[count] = *str1;
					count++;
				}
			}
			j++;
		}
		str1++;
	}
	i = 0;
	while (i < count)
	{
		write(1, &inter[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
