/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:07:42 by hyeongki          #+#    #+#             */
/*   Updated: 2022/03/16 23:38:40 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	ret = malloc(sizeof(char) * len);
	i = 0;
	if (!ret)
		return (NULL);
	while (i < len)
	{
		*(ret + i) = *(s + start);
		start++;
		i++;
	}
	return (ret);
}
