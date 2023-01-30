/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:19:49 by ddantas-          #+#    #+#             */
/*   Updated: 2023/01/30 17:11:30 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct ps_list
{
	int				data;
	struct ps_list	*next;
}					t_ps_list;

/*		list_functions.c	*/
void		ft_freelist(t_ps_list *alst, t_ps_list *blst, int malloc);
t_ps_list	*ft_add_alst(t_ps_list **alst, t_ps_list *blst, int atoi);

/*		list_utils.c		*/

/*		protection.c		*/
void		free_stuff(t_ps_list *lst, int *stack_a, int *stack_b, int error);
int			already_sorted(t_ps_list *lst, int *stack_a, int argc, int n);
int			check_n(t_ps_list **lst, char *str, int *stack_a, int *stack_b);
int			duplicate_check(t_ps_list *lst, int *stack_a, int *stack_b, int n);
int			*protection(t_ps_list **lst, int *stack_a, int argc, char **argv);

/*		operations.c		*/
t_ps_list	*sa(t_ps_list	*alst, int ss);
t_ps_list	*sb(t_ps_list *blst, int ss);
void		pa(t_ps_list **blst, t_ps_list **alst);
void		pb(t_ps_list **blst, t_ps_list **alst);

/*		operations_2.c		*/
void    ra(t_ps_list **alst, int rr);
void    rb(t_ps_list **blst, int rr);
void	rra(t_ps_list **alst, int rrr);
void	rrb(t_ps_list **blst, int rrr);

/*		push_swap.c			*/
t_ps_list	*ss(t_ps_list *alst, t_ps_list *blst);
void	rr(t_ps_list **alst, t_ps_list **blst);
void	rrr(t_ps_list **alst, t_ps_list **blst);
#endif