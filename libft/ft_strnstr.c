/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:47:49 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:47:50 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Locates the first occurrence of the null-terminated
 * string needle in the string haystack, where not more
 * than len characters are searched.  Characters that
 * appear after a `\0' character are not searched.
 *
 * If needle is an empty string, haystack is returned;
 * if needle occurs nowhere in haystack, NULL is returned;
 * otherwise a pointer to the first character of the first
 * occurrence of needle is returned. */

#include "libft.h"
#include <limits.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	len_needle;

	if (n > LONG_MAX)
		n = ft_strlen(haystack);
	if (!*needle)
		return ((char *)haystack);
	i = 0;
	len_needle = ft_strlen(needle);
	while (i < n)
	{
		if ((ft_strncmp(haystack, needle, len_needle) == 0))
		{
			if (n < len_needle + i)
				return (NULL);
			return ((char *)haystack);
		}
		haystack++;
		i++;
	}
	return (0);
}
