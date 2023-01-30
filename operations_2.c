/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:32:24 by ddantas-          #+#    #+#             */
/*   Updated: 2023/01/30 17:27:39 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_ps_list **alst, int rr)
{
	t_ps_list	*temp;

	if ((*alst) == NULL || (*alst)->next == NULL)
		return ;
	if (rr == 0)
		ft_printf("ra\n");
	temp = (*alst);
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = (*alst);
	*alst = (*alst)->next;
	temp->next->next = NULL;
}

void    rb(t_ps_list **blst, int rr)
{
	t_ps_list	*temp;

	if ((*blst) == NULL || (*blst)->next == NULL)
		return ;
	if (rr == 0)
		ft_printf("rb\n");
	temp = (*blst);
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = (*blst);
	*blst = (*blst)->next;
	temp->next->next = NULL;
}

void	rra(t_ps_list **alst, int rrr)
{
	t_ps_list	*temp;

	if ((*alst) == NULL || (*alst)->next == NULL)
		return ;
	if (rrr == 0)
		ft_printf("rra\n");
	temp = (*alst);
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next->next = (*alst);
	(*alst) = temp->next;
	temp->next = NULL;	
}

void	rrb(t_ps_list **blst, int rrr)
{
	t_ps_list	*temp;

	if ((*blst) == NULL || (*blst)->next == NULL)
		return ;
	if (rrr == 0)
		ft_printf("rrb\n");
	temp = (*blst);
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next->next = (*blst);
	(*blst) = temp->next;
	temp->next = NULL;	
}