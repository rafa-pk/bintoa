# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raica-ba <raica-ba@student.42lisboa.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/06 18:53:06 by raica-ba          #+#    #+#              #
#    Updated: 2025/04/06 18:53:08 by raica-ba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bintoa.a

CC = cc

INCLUDES = .

FLAGS = -Wall -Wextra -Werror -g

SRC_DIR = src
OBJ_DIR = obj

SRC_FILES = bintoa.c char_translation.c str_split.c

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

EXEC = bintoa

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
				@ar rcs $@ $(OBJ)
				@ranlib $@

$(EXEC): $(OBJ)
				$(CC) $(FLAGS) -o $(EXEC) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
				$(CC) $(FLAGS) -c $< -o $@
$(OBJ_DIR):
				@mkdir -p $(OBJ_DIR)

clean:
				echo "Removing $(OBJ_DIR)"
				rm -rf $(OBJ_DIR)
fclean: clean
				echo "Removing $(NAME)"
				rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
