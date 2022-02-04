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

/*_____________________________________________________________________________

Libère la mémoire de l’élément passé en argument
en utilisant la fonction del puis avec free(3). La
mémoire de next ne doit pas être free.

#1. L’élement à free
#2. L’adresse de la fonction permettant de supprimer 
le contenu de l’élement. 
_____________________________________________________________________________*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst && !del)
		return ;
	del(lst->content);
	free(lst);
}
