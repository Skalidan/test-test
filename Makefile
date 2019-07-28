/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    Makefile                                           :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: ndoukas@student.hive.fi>                   +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2019/07/28 13:32:15 by ndoukas          #+#     #+#              */
/*    Updated: 2017/07/28 18:39:42 by ndoukas         ###   ########.fi         */
/*                                                                              */
/* **************************************************************************** */

NAME = eval_expr
FILES = main.c eval_expr.c ft.c stack.c cases.c

.PHONY: all clean fclean

all:
	@gcc -Wall -Werror -Wextra -o $(NAME) $(FILES)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
