/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:51:55 by lsalin            #+#    #+#             */
/*   Updated: 2023/02/22 14:51:56 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	r = malloc(count * size);
	if (!r)
		return (NULL);
	ft_bzero(r, size * count);
	return (r);
}
