/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    ft.h                                               :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: ndoukas@student.hive.fi>                   +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2019/07/28 13:32:15 by ndoukas          #+#     #+#              */
/*    Updated: 2017/07/28 18:39:42 by ndoukas         ###   ########.fi         */
/*                                                                              */
/* **************************************************************************** */

#ifndef FT_H
# define FT_H

# include "stack.h"

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		is_whitespace(char c);
int		ft_atoi(char *str);
int		eval_expr(char *str);
int		digits(int num);

void	case_operand(char *str, t_stack *g_num, int *num_len);
void	case_operator(t_stack *g_op, void (*do_op)(char c),
	int (*precedence)(char c1, char c2), char c);
void	case_closing_parenthesis(t_stack *g_op, void (*do_op)(char c));

#endif
