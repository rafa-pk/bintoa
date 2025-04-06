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
	char	*text_str;
	char	**table;
	size_t	j;

	text_str = NULL;
	j = 0;
	if (!binary_str)
		return (NULL);
	while (*binary_str)
	{
		if (*binary_str != '0' || *binary_str != '1' || *binary_str != ' ')
			return (NULL);
		binary_str++;
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

int	main(void)
{
	char	*binary_str = "0011000100110110011001100110010011010010";
	char	*text_str = bintoa(binary_str);

	if (!text_str)
		return (1);
	printf("Binary string: %s\n", binary_str);
	printf("Translation: %s\n", text_str);
	free(text_str);
	return (0);
}