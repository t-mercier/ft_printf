/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:45:19 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:45:21 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*_____________________________________________________________________________

Alloue (avec malloc(3)) et renvoie un nouvel
élément. la variable content est initialisée à
l’aide de la valeur du paramètre content. La
variable ’next’ est initialisée à NULL.

RETOUR > Le nouvel element
_____________________________________________________________________________*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
