/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 07:40:04 by  ddantas-         #+#    #+#             */
/*   Updated: 2023/01/31 12:18:13 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_ps_list	*alst, int ss)
{
	int		n_temp;
	int		c = 0;

	if (alst == NULL || alst->next == NULL)
		return (alst);
	if (ss == 0)
	{
		c++;
		ft_printf("sa\n");
	}
	if (alst != NULL && alst->next != NULL)
	{
		n_temp = alst->next->data;
		alst->next->data = alst->data;
		alst->data = n_temp;
	}
	return (c);
}

int	sb(t_ps_list *blst, int ss)
{
	int		n_temp;
	int		c = 0;

	if (blst == NULL || blst->next == NULL)
		return (blst);
	if (ss == 0)
	{
		c++;
		ft_printf("sb\n");
	}
	if (blst != NULL && blst->next != NULL)
	{
		n_temp = blst->next->data;
		blst->next->data = blst->data;
		blst->data = n_temp;
	}
	return (c);
}

int	pa(t_ps_list **blst, t_ps_list **alst)
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
	return (1);
}

int	pb(t_ps_list **blst, t_ps_list **alst)
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
	return (1);
}
