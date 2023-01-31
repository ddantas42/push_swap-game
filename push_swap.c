/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:47:35 by ddantas-          #+#    #+#             */
/*   Updated: 2023/01/31 12:34:18 by ddantas-         ###   ########.fr       */
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

int	ss(t_ps_list *alst, t_ps_list *blst)
{
	sa(alst, 1);
	sb(blst, 1);
	ft_printf("ss\n");
	return (1);
}

int	rr(t_ps_list **alst, t_ps_list **blst)
{
	ra(alst, 1);
	rb(blst, 1);
	ft_printf("rr\n");
	return (1);
}

int	rrr(t_ps_list **alst, t_ps_list **blst)
{
	rra(alst, 1);
	rrb(blst, 1);
	ft_printf("rrr\n");
	return (1);
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
		system("clear"); ft_printf("1  2  3  4  5  6  7  8   9   10  11\npa pb sa sb ss ra rb rr rra rrb rrr\n");
	print_list_a(alst);
	int	n;	scanf("%d", &n);
	int commands = 0;
	while (n)
	{
		system("clear"); ft_printf("1  2  3  4  5  6  7  8   9   10  11\npa pb sa sb ss ra rb rr rra rrb rrr\n");
		if (n == 1)
			commands += pa(&blst, &alst);
		if (n == 2)
			commands += pb(&blst, &alst);
		if (n == 3)
			commands += sa(alst, 0);
		if (n == 4)
			commands += sb(blst, 0);
		if (n == 5)
			commands += ss(alst, blst);		
		if (n == 6)
			commands += ra(&alst, 0);
		if (n == 7)
			commands += rb(&blst, 0);
		if (n == 8)
			commands += rr(&alst, &blst);
		if (n == 9)
			commands += rra(&alst, 0);
		if (n == 10)
			commands += rrb(&blst, 0);
		if (n == 11)
			commands += rrr(&alst, &blst);
		print_list_a(alst);
		print_list_b(blst);
		ft_printf("number of movements: %d\nNext commands: ", commands);
		scanf("%d", &n);
		
	}
	ft_freelist(alst, blst, 0);
	return (0);
}
