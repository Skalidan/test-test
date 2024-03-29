/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    cases.c  	                                         :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: ndoukas@student.hive.fi>                   +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2019/07/28 13:32:15 by ndoukas          #+#     #+#              */
/*    Updated: 2017/07/28 18:39:42 by ndoukas         ###   ########.fi         */
/*                                                                              */
/* **************************************************************************** */

#include "ft.h"
#include "stack.h"

void	case_operand(char *str, t_stack *g_num, int *num_len)
{
	push(ft_atoi(str), g_num);
	*num_len = digits(ft_atoi(str));
}

void	case_operator(t_stack *g_op, void (*do_op)(char c),
	int (*precedence)(char c1, char c2), char c)
{
	while (!is_empty(g_op) && precedence((*g_op).stk[(*g_op).top], c))
		do_op('.');
	push(c, g_op);
}

void	case_closing_parenthesis(t_stack *g_op, void (*do_op)(char c))
{
	while ((*g_op).stk[(*g_op).top] != '(')
		do_op('.');
	pop(g_op);
}
