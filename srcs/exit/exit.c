/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:51:10 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 12:09:51 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	clean_exit(t_data *data, int code)
{
	if (!data)
		exit(code);
	if (data->win && data->mlx)
		mlx_destroy_window(data->mlx, data->win);
	if (data->mlx)
	{
		mlx_destroy_display(data->mlx);
		mlx_loop_end(data->mlx);
		free(data->mlx);
	}
	free_data(data);
	exit(code);
}

int	quit_cub3d(t_data *data)
{
	clean_exit(data, 0);
	return (0);
}
