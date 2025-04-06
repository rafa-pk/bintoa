/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_translation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 12:40:47 by raica-ba          #+#    #+#             */
/*   Updated: 2025/04/06 12:41:17 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bintoa.h"

char	**char_translation(char **table)
{
	size_t	row;

	row = 0;
	while (table[j])
	{
		table[j] = bin_to_char(table[j]);
		j++;
	}
	table[j] = NULL;
	return (table);
}

char	bin_to_char(char *str)
{
	size_t	i;
	char	power;
	char	character;

	i = 7;
	power = 2
	character = 0;
	while (i < 8)
	{
		if (str[i] == '1')
			character += power;
		power *= 2;
		i++;
	}
	return (character);
}

int	main(void)
{
	char	**table[] = { "00110011", "10010011", "01100101", "01000010", NULL};

	printf("Translation:")
}