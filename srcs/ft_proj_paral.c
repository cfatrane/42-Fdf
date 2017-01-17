/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proj_paral.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:58:50 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/17 17:33:08 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_draw_single_collumn(t_env *fdf)
{
	while (fdf->point.y < ((fdf->map.nblin - 1) * fdf->point.spc))
	{
		fdf->point.x2 = X2PC;
		fdf->point.y2 = Y2PC;
		ft_bresenham(fdf);
		fdf->map.y++;
		fdf->point.y += fdf->point.spc;
		fdf->point.x1 = fdf->point.x2;
		fdf->point.y1 = fdf->point.y2;
	}
}

void	ft_draw_collumns(t_env *fdf)
{
	fdf->map.x = 0;
	fdf->point.x = 0;
	while (fdf->point.x < fdf->map.nbcol * fdf->point.spc)
	{
		fdf->point.y = 0;
		fdf->map.y = 0;
		fdf->point.x1 = X1PC;
		fdf->point.y1 = Y1PC;
		ft_draw_single_collumn(fdf);
		fdf->map.x++;
		fdf->point.x += fdf->point.spc;
	}
}

void	ft_draw_single_line(t_env *fdf)
{
	while (fdf->point.x < (fdf->map.nbcol - 1) * fdf->point.spc)
	{
		fdf->point.x2 = X2PL;
		fdf->point.y2 = Y2PL;
		ft_bresenham(fdf);
		fdf->map.x++;
		fdf->point.x += fdf->point.spc;
		fdf->point.x1 = fdf->point.x2;
		fdf->point.y1 = fdf->point.y2;
	}
}

void	ft_draw_lines(t_env *fdf)
{
	fdf->map.y = 0;
	fdf->point.y = 0;
	while (fdf->point.y < fdf->map.nblin * fdf->point.spc)
	{
		fdf->map.x = 0;
		fdf->point.x = 0;
		fdf->point.x1 = X1PL;
		fdf->point.y1 = Y1PL;
		ft_draw_single_line(fdf);
		fdf->map.y++;
		fdf->point.y += fdf->point.spc;
	}
}
