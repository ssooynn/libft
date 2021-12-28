/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooyeon <sooylee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:40:36 by sooyeon           #+#    #+#             */
/*   Updated: 2021/12/13 21:24:20 by sooyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;
	size_t			i;

	if (!dst && !src)
		return (0);
	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	i = 0;
	while (i < num)
	{
		new_dst[i] = new_src[i];
		i++;
	}
	return (dst);
}
