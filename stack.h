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

#ifndef STACK_H
# define STACK_H

typedef struct	s_stack
{
	int			stk[1000000];
	int			top;
}				t_stack;

void			push(int x, t_stack *s);
int				pop(t_stack *s);
int				is_empty(t_stack *s);

#endif
