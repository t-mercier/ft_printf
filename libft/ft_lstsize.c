/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:45:25 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:45:26 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *head)
{
	int	i;
	t_list *tmp;

	i = 1;
	tmp = head;
	if (!tmp)
		return (EXIT_FAILURE);
	while (tmp != NULL && ++i)
		tmp = tmp->next;
	return (i);
}
