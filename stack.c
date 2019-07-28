/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    stack.h                                            :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: ndoukas@student.hive.fi>                   +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2019/07/28 13:32:15 by ndoukas          #+#     #+#              */
/*    Updated: 2017/07/28 18:39:42 by ndoukas         ###   ########.fi         */
/*                                                                              */
/* **************************************************************************** */

#include "stack.h"

void	push(int x, t_stack *s)
{
	s->top = s->top + 1;
	s->stk[s->top] = x;
}

int		pop(t_stack *s)
{
	int num;

	if (s->top == -1)
		return (0);
	else
	{
		num = s->stk[s->top];
		s->top = s->top - 1;
		return (num);
	}
}

int		is_empty(t_stack *s)
{
	return (s->top == -1);
}
