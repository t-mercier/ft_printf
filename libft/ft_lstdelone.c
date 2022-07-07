/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:44:56 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:44:58 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Removes one element from the list container */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst && !del)
		return ;
	del(lst->content);
	free(lst);
}
