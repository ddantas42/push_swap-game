/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:19:49 by ddantas-          #+#    #+#             */
/*   Updated: 2023/01/31 13:05:21 by ddantas-         ###   ########.fr       */
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
int			sa(t_ps_list	*alst, int ss);
int			sb(t_ps_list *blst, int ss);
int			pa(t_ps_list **blst, t_ps_list **alst);
int			pb(t_ps_list **blst, t_ps_list **alst);

/*		operations_2.c		*/
int  		ra(t_ps_list **alst, int rr);
int   	 	rb(t_ps_list **blst, int rr);
int			rra(t_ps_list **alst, int rrr);
int			rrb(t_ps_list **blst, int rrr);

/*		push_swap.c			*/
int			is_it_sorted(t_ps_list **alst, t_ps_list **blst);
int			ss(t_ps_list *alst, t_ps_list *blst);
int			rr(t_ps_list **alst, t_ps_list **blst);
int			rrr(t_ps_list **alst, t_ps_list **blst);
#endif