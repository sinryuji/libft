/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:33:35 by hyeongki          #+#    #+#             */
/*   Updated: 2022/05/31 16:44:06 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long long n, int base)
{
	int		i;
	char	*ret;
	int		len;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (base == 10 && n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_nbrlen_base(n, base) + 1;
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	if (n < 0)
	{
		ret[0] = '-';
		i++;
		n *= -1;
	}
	while (--len > i)
	{
		ret[len - 1] = HEX_UPPER[n % base];
		n /= base;
	}
	return (ret);
}
