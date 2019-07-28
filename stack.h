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
