/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:48:04 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:48:06 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* The substring is the portion of the object that starts
 * at character position pos and spans len characters (or until
 * the end of the string, whichever comes first).
 * Returns a newly constructed string object with its value
 * initialized to a copy of a substring of this object. */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*str;

	if (!s)
		return (0);
	s_len = ft_strlen(s) + 1;
	if (len > s_len)
		len = s_len;
	str = malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && i + start < s_len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
