/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bintoa.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:26:49 by raica-ba          #+#    #+#             */
/*   Updated: 2025/03/25 17:55:23 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BINTOA_H
# define BINTOA_H

# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>

char	*bintoa(char *binary_str);
char	**str_split(char *str);
size_t	char_count(char *str);
char	*word_malloc(char *str, size_t length);
int		storing_in_table(char **table, char *str);
size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t len);
char	*char_translation(char **table);
char	bin_to_char(char *str);

#endif
