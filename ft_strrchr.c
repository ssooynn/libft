#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	find;
	int		i;

	find = (unsigned char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (s[i] == find)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == find)
		return ((char *)s + i);
	return (0);
}