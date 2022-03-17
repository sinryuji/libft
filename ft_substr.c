/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:07:42 by hyeongki          #+#    #+#             */
/*   Updated: 2022/03/17 14:51:08 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	if (!s)
		return (NULL);
	ret = malloc(sizeof(char) * len + 1);
	i = 0;
	if (!ret)
		return (NULL);
	while (i < len)
	{
		*(ret + i) = *(s + start);
		start++;
		i++;
	}
	*(ret + i) = '\0';
	return (ret);
}
