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

/*_____________________________________________________________________________

Supprime et libère la mémoire de l’élément passé en
paramètre, et de tous les élements qui suivent, à
l’aide de del et de free(3)
Enfin, le pointeur initial doit être mis à NULL.

#1. L’adresse du pointeur vers un élément.
#2. L’adresse de la fonction permettant de
supprimer le contenu d’un élément.
_____________________________________________________________________________*/

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

// void delete_node(t_list *lst, void *content)
// {
// 	t_list *n;
// }