/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:47:06 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:47:08 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*_____________________________________________________________________________

Applique la fonction f à chaque caractère de la
chaîne de caractères transmise comme argument, et
en passant son index comme premier argument. Chaque
caractère est transmis par adresse à f pour être
modifié si nécessaire.

PARAMETERS
#1. La chaine de caractères sur laquelle itérer.
#2. La fonction à appliquer à chaque caractère.
_____________________________________________________________________________*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
		s[i] = '\0';
	}
}
