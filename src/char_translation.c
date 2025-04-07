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

char	*char_translation(char **table)
{
	size_t	ix;
	size_t	len;
	char	*txt_str;

	ix = 0;
	len = 0;
	while (table[len])
		len++;
	txt_str = (char *)malloc((sizeof(char) * len) + 1);
	while (table[ix])
	{
		txt_str[ix] = bin_to_char(table[ix]);
		ix++;
	}
	txt_str[ix] = '\0';
	return (txt_str);
}

char	bin_to_char(char *str)
{
	size_t	i;
	char	character;

	i = 0;
	character = 0;
	while (i < 8)
	{
		character <<= 1;
		if (str[i] == '1')
			character += 1;
		i++;
	}
	return (character);
}
/*
int	main(void)
{
	char	*table[] = { "01001000", "01100101", "01101100", "01101100", "01101111", NULL};
	char	*translated = char_translation(table);

	if (!translated)
		return (1);
	printf("Translation: %s\n", translated);
	free (translated);
	return (0);
}
*/