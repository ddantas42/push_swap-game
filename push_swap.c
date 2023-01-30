/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:47:35 by ddantas-          #+#    #+#             */
/*   Updated: 2023/01/30 17:40:27 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list_a(t_ps_list *lst)
{
	t_ps_list *temp = lst;
	ft_printf("A\n");
	while (temp)
	{
		ft_printf("lst.data = %d\n",temp->data);
		temp = temp->next;
	}
	ft_printf("_\n\n");
}


void	print_list_b(t_ps_list *lst)
{
	t_ps_list *temp = lst;
	ft_printf("B\n");
	while (temp)
	{
		ft_printf("lst.data = %d\n",temp->data);
		temp = temp->next;
	}
	ft_printf("_\n\n");
}

t_ps_list	*ss(t_ps_list *alst, t_ps_list *blst)
{
	alst = sa(alst, 1);
	blst = sb(blst, 1);
	ft_printf("ss\n");
	return (0);
}

void	rr(t_ps_list **alst, t_ps_list **blst)
{
	ra(alst, 1);
	rb(blst, 1);
	ft_printf("rr\n");
}

void	rrr(t_ps_list **alst, t_ps_list **blst)
{
	rra(alst, 1);
	rrb(blst, 1);
	ft_printf("rrr\n");
}

int	main(int argc, char **argv)
{
	int			*stack_a;
	t_ps_list		*alst;
	t_ps_list		*blst;
	
	alst = 0;
	blst = 0;
	stack_a = (int *)malloc((argc - 1) * sizeof(int));
	if (!stack_a)
		free_stuff(alst, stack_a, 0, 1);	
	protection(&alst, stack_a, argc, argv);
	print_list_a(alst);
	int	c;	scanf("%d", &c);
	while (c)
	{
		system("clear"); ft_printf("1  2  3  4  5  6  7  8   9   10  11\npa pb sa sb ss ra rb rr rra rrb rrr\n");
		if (c == 1)
			pa(&blst, &alst);
		if (c == 2)
			pb(&blst, &alst);
		if (c == 3)
			sa(alst, 0);
		if (c == 4)
			sb(blst, 0);
		if (c == 5)
			ss(alst, blst);		
		if (c == 6)
			ra(&alst, 0);
		if (c == 7)
			rb(&blst, 0);
		if (c == 8)
			rr(&alst, &blst);
		if (c == 9)
			rra(&alst, 0);
		if (c == 10)
			rrb(&blst, 0);
		if (c == 11)
			rrr(&alst, &blst);
		print_list_a(alst);
		print_list_b(blst);
		scanf("%d", &c);
	}
	ft_freelist(alst, blst, 0);
	return (0);
}
