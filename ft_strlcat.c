/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:45:22 by sooylee           #+#    #+#             */
/*   Updated: 2021/12/13 16:55:57 by sooyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	dst_len;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (len < dst_len)
		return (src_len + len);
	dst = dst + dst_len;
	ft_strlcpy(dst, src, len - dst_len);
	return (src_len + dst_len);
}
