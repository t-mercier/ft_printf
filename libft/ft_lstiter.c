/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:45:01 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:45:04 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Itère sur la list lst et applique la fonction f au
 * contenu chaque élément.
 * #1. L’adresse du pointeur vers un élément.
 * #2. L’adresse de la fonction à appliquer. */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
