/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 07:40:04 by  ddantas-         #+#    #+#             */
/*   Updated: 2023/01/30 15:56:54 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_list	*sa(t_ps_list	*alst, int ss)
{
	int		n_temp;

	if (alst == NULL || alst->next == NULL)
		return (alst);
	if (ss == 0)
		ft_printf("sa\n");
	if (alst != NULL && alst->next != NULL)
	{
		n_temp = alst->next->data;
		alst->next->data = alst->data;
		alst->data = n_temp;
	}
	return (alst);
}

t_ps_list	*sb(t_ps_list *blst, int ss)
{
	int		n_temp;

	if (blst == NULL || blst->next == NULL)
		return (blst);
	if (ss == 0)
		ft_printf("sb\n");
	if (blst != NULL && blst->next != NULL)
	{
		n_temp = blst->next->data;
		blst->next->data = blst->data;
		blst->data = n_temp;
	}
	return (blst);
}

void	pa(t_ps_list **blst, t_ps_list **alst)
{
	t_ps_list	*temp;

	if (*blst == NULL)
		return ;
	if (*alst == NULL)
	{
		temp = (*blst)->next;
		(*alst) = (*blst);
		(*alst)->next = NULL;
		(*blst) = temp;
	}
	else
	{
		temp = (*alst);
		(*alst) = (*blst);
		(*blst) = (*blst)->next;
		(*alst)->next = temp;
	}
	ft_printf("pa\n");
}

void	pb(t_ps_list **blst, t_ps_list **alst)
{
	t_ps_list	*temp;

	if (*alst == NULL)
		return ;
	if (*blst == NULL)
	{
		temp = (*alst)->next;
		(*blst) = (*alst);
		(*blst)->next = NULL;
		(*alst) = temp;
	}
	else
	{
		temp = (*blst);
		(*blst) = (*alst);
		(*alst) = (*alst)->next;
		(*blst)->next = temp;
	}
	ft_printf("pb\n");
}
