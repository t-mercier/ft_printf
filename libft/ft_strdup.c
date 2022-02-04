/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:46:59 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:47:01 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*_____________________________________________________________________________

The strdup() function allocates sufficient memory for a copy of the 
string s1, does the copy, and returns a pointer to it.  
The pointer may subsequently be used as an argument to the function free(3).
If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
The strndup() function copies at most n characters from the string s1 always NUL 
terminating the copied string.
La nouvelle chaine de caractères. NULL si
l’allocation échoue.
_____________________________________________________________________________*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s1) + 1;
	ptr = malloc(len);
	if (!ptr || !s1)
		return (NULL);
	ft_memcpy(ptr, s1, len);
	return (ptr);
}
