/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:44:11 by tmercier      #+#    #+#                 */
/*   Updated: 2022/01/28 14:30:03 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*_____________________________________________________________________________

Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative nbers must be handled.

RETURN -> The string representing the integer.  NULL if the
allocation fails. 
_____________________________________________________________________________*/

#include "libft.h"
#include <stdlib.h>

static char	*ft_convert(int n, int len, char *str)
{
	if (n > 0)
		n *= -1;
	while (len > 0)
	{
		len--;
		str[len] = -(n % 10) + 48;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_nbrlen(n);
	if (n < 0)
		len += 1;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	str = ft_convert(n, len, str);
	if (n < 0)
		str[0] = '-';
	return (str);
}
