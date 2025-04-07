/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bintoa_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:40:50 by raica-ba          #+#    #+#             */
/*   Updated: 2025/03/25 22:18:42 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bintoa.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**str_split(char *str)
{
	char	**table;

	if (!str)
		return (NULL);
	table = (char **)malloc(sizeof(char *) * (char_count(str) + 1));
	if (!table)
	{
		free(table);
		return (0);
	}
	if (storing_in_table(table, str))
		return (NULL);
	return (table);
}

size_t	char_count(char *str)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((i % 8) == 0 || str[i] == ' ')
			count++;
		i++;
	}
	return (count);
}

char	*word_malloc(char *str, size_t length)
{
	char	*binary_string;

	if (length == 0 || !str)
		return (NULL);
	binary_string = (char *)malloc(sizeof(char) * (length + 1));
	if (!binary_string)
		return (NULL);
	ft_strlcpy(binary_string, str, length);
	binary_string[length] = '\0';
	return (binary_string);
}

size_t	ft_strlcpy(char *dest, char *src, size_t len)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (len == 0)
		return (src_len);
	while (src[i] != '\0' && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

//still needs space implementations
int	storing_in_table(char **table, char *str)
{
	size_t	i;
	size_t	j;
	size_t	length;
	char	*character;

	i = 0;
	j = 0;
	length = 0;
	character = str;
	while (str[i])
	{
		if (str[i] == ' ' || (i > 0 && (i % 8 == 0)))
		{
			table[j++] = word_malloc(character, length);
			length = 0;
			if (str[i] == ' ')
				character = &str[i + 1];
			character = &str[i];
		}
		length++;
		i++;
	}
	if (length > 0)
		table[j++] = word_malloc(character, length);
	table[j] = NULL;
	return (0);
}
/*
int	main()
{
	char 	*str;
	size_t	i = 0;
	char **result;
	
	str = "001100010011011001100110011001001101001";
	result = str_split(str);
	if (!result)
		return (1);
	while (result[i])
	{
		printf("8 bit combination no. %zu: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	printf("%zu\n", char_count(str));
	return (0);
}
*/
