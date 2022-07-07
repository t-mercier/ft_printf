/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:44:51 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:44:52 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Removes all elements from the list container (which are destroyed),
 * and leaving the container with a size of 0. */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n;

	if (!lst && !del)
		return ;
	while (*lst)
	{
		n = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = n;
	}
}
