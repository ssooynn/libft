#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*new;

	new = ptr;
	while (num > 0)
		*new++ = value;
	return (ptr);
}
