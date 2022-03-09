/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:05:37 by hyeongki          #+#    #+#             */
/*   Updated: 2022/03/09 23:41:03 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
	*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
	i++;
    }
    return (dest);
}
