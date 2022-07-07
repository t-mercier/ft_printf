/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:44:44 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:44:46 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* nserts a new element at the beginning of the list,
 * right before its current first element. The content of val is
 * copied (or moved) to the inserted element. */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
