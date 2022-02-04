/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:47:44 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:47:46 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*_____________________________________________________________________________

The strcmp() and strncmp() functions lexicographically compare the 
null-terminated strings s1 and s2. 
The strncmp() function compares not more than n characters. 
Because strncmp() is designed for comparing strings rather 
than binary data, characters that appear after a `\0' 
character are not compared.

RETURN VALUES
The strcmp() and strncmp() functions return an integer greater than, 
equal to, or less than 0, according as the string s1 is greater than, 
equal to, or less than the string s2.  The comparison is done 
using unsigned characters, so that `\200' is greater than `\0'. 
_____________________________________________________________________________*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (*s1 && *s1 == *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
