/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:44:35 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:44:36 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Ajoute l’élément new à la fin de la liste. */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!*alst)
		*alst = new;
	else
		ft_lstlast(*alst)->next = new;
}
