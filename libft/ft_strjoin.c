/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:47:13 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:47:14 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* str_join concatenates all the strings/character arrays
 * passed to it. If 'delim' is not NULL then after every string,
 * the 'delim' string is concatenated.
 * It allocates a new character array whose size is equal to
 * the sum of the lengths of all strings passed to it plus 1
 * (extra 1 for terminating null byte). It then concatenates
 * all the strings passed to it separated by 'delim' string
 * into the newly allocated character array.
 * Returns the pointer to the newly allocated character array.
 * If memory allocation fails then NULL is returned. */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	if (!s1)
		return (ft_strdup(s2));
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(char) * (len));
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcpy(str + ft_strlen(str), s2);
	return (str);
}

// int main(void)
// {
// 	size_t len = 10;
// 	char **foo = malloc(sizeof(char *) * (len + 1));
// 	char **foo = calloc(sizeof(char *), len + 1);
// 	char *foo = "Hello, World!";
// 	char specific_char = *(foo + 3);
// }
