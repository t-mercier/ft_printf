/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:42:42 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:42:43 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*_____________________________________________________________________________

The bzero() function writes n zeroed bytes to the string s.  
If n is zero, bzero() does nothing. 
_____________________________________________________________________________*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	if (n == 0)
		return ;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int main ()
// {
// 	char str[] = "bonjour";

// 	ft_bzero(str, 5);
// 	printf("%s\n", str);

// 	// bzero(str, 5);
// 	// printf("%s", str);

// 	return 0;
// }