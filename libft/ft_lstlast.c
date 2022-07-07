/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:45:07 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:45:09 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Returns a pointer to the last element in the list container. */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
