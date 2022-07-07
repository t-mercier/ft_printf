/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:46:51 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:46:52 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* locates the first occurrence of c (converted to a char)
 * in the string pointed to by s. The terminating null character
 * is considered to be part of the string; therefore if c is `\0',
 * the functions locate the terminating `\0'.
 * Returns a pointer to the located character. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return (str);
}
