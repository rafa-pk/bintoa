/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bintoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:16:10 by raica-ba          #+#    #+#             */
/*   Updated: 2025/03/25 21:41:47 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bintoa.h"

char	*bintoa(char *binary_str)
{
	size_t	j;
	size_t	i;
	char	*text_str;
	char	**table;

	j = 0;
	i = 0;
	text_str = NULL;
	if (!binary_str && ft_strlen(binary_str) % 8 != 0)
		return (NULL);
	while (binary_str[i])
	{
		if (binary_str[i] != '0' && binary_str[i] != '1'
			&& binary_str[i] != ' ')
			return (NULL);
		i++;
	}
	table = str_split(binary_str);
	if (!table)
		return (NULL);
	text_str = char_translation(table);
	while (j > 0)
		free(table[--j]);
	free(table);
	return (text_str);
}
/*
int	main(void)
{
	char	*binary_str = "010010000110010101101100011011000110111100100000010101110110111101110010011011000110010000100001";
	char	*text_str = bintoa(binary_str);

	if (!text_str)
	{	
		printf("Error 1");
		return (1);
	}
	printf("Binary string: %s\n", binary_str);
	printf("Translation: %s\n", text_str);
	free(text_str);
	return (0);
}*/
