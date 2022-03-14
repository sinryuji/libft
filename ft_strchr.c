/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:21:20 by hyeongki          #+#    #+#             */
/*   Updated: 2022/03/14 20:40:48 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
    while (*s)
    {
	if (*s == c)
	    return ((char *)s);
	s++;
    }
    if (*s == c)
	return ((char *)s);
    return (0);
}
