/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:18:26 by hyeongki          #+#    #+#             */
/*   Updated: 2022/03/11 00:10:38 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char tmp[n];

    if (!dest || !src)
	return (0);
    i = -1;
    while (++i < n)
	tmp[i] = *(unsigned char *)(src + i);
    i = -1;
    while (++i < n)
	*(unsigned char *)(dest + i) = tmp[i];
    return (dest);
}
