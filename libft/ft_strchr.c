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

/*_____________________________________________________________________________

locates the first occurrence of c (converted to a char) in the string 
pointed to by s. The terminating null character is considered to be part of 
the string; therefore if c is `\0', the functions locate the terminating `\0'.

RETURN -> A pointer to the located character, or NULL if the character 
does not appear in the string.
_____________________________________________________________________________*/

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

// int main()
// {
// 	char *s = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";

// 	printf("official : %s\n", strchr(s, '\0'));
// 	printf("mine : %s\n", ft_strchr(s, '\0'));
// }