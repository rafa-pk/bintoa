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

	text_str = NULL;
	if (!binary_str)
		return (NULL);
	while (*binary_str)
	{
		if (*binary_str != "0" || *binary_str != "1" || *binary_str != " ")
			return (NULL);
		str_split(binary_str, 8);
		char_translation(table);
			//taking care of numbers, letters, special characters, non-printables etc...
		//storing it as replacing value within table
		text_str = ft_strjoin(text_str, table[ch]);
		str++;
	}
	return (text_str);
}
