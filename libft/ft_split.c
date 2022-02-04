/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:46:42 by tmercier      #+#    #+#                 */
/*   Updated: 2021/12/01 19:22:58 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*_____________________________________________________________________________

Allocates (with malloc) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter.  The array must be
i_ended by a NULL pointer.

RETURN -> The array of new strings resulting from the split.
NULL if the allocation fails.
_____________________________________________________________________________*/

#include "libft.h"
#include <stdlib.h>

static size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

char	**freetab(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

static char	**get_words(char **ptr, char const *s, char c)
{
	size_t	j;
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (count < word_count(s, c))
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[j + i] != c && s[j + i] != '\0')
				j++;
			ptr[count] = ft_substr(s, i, j);
			if (!ptr[count])
				return (freetab(ptr));
			i += j;
			count++;
		}
		i++;
	}
	ptr[count] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (0);
	result = (char **)malloc(sizeof(s) * (word_count(s, c) + 1));
	if (!result)
		return (0);
	return (get_words(result, s, c));
}
