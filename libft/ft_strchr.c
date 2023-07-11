/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:54:31 by lsalin            #+#    #+#             */
/*   Updated: 2023/02/22 14:54:31 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	ch;

	i = 0;
	ch = c;
	if (ch == '\0')
	{
		i = ft_strlen(str);
		return ((char *)str + i++);
	}
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
