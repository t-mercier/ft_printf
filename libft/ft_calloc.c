/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:42:49 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:42:50 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*_____________________________________________________________________________

The calloc()function allocate memory. 
The allocated memory is aligned such that it can be used for any data type, 
including AltiVec- and SSE-related types.  
The free() function frees allocations that were created via the preceding 
allocation functions.

The calloc() function contiguously allocates enough space for count 
objects that are size bytes of memory each and returns a pointer to the 
allocated memory. The allocated memory is filled with bytes of value zero.

-> Returns a pointer to allocated memory. 
If there is an error, they return a NULL pointer and set errno to ENOMEM.
_____________________________________________________________________________*/

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (0);
	ft_bzero(ptr, (size * count));
	return (ptr);
}
