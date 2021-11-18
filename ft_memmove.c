#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t num)
{
        unsigned char   *new_dst;
        unsigned char   *new_src;
        size_t                  i;

        if (!dst && !src)
                return (0);
        new_dst = (unsigned char *) dst;
        new_src = (unsigned char *)src;
        i = 0;
        while (i < num)
	{
                new_dst[i] = new_src++[i];
                i++;
	}
        return (dst);
}
