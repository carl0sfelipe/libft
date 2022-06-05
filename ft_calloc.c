#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*pointer;
	size_t		zeroed;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	pointer = malloc(count * size);
	if (pointer == NULL)
		return (NULL);
	zeroed = count * size;
	ft_bzero(pointer, zeroed);
	return (pointer);
}