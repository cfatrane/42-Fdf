/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 10:29:16 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/10 14:48:23 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../libft/libft.h"
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <math.h>
# include <mlx.h>


typedef struct	s_point
{
	int abscisse;
	int ordonnée;
	int altitude;
}				t_point;

typedef struct	s_env
{
	void	*mlx;
	void	*win;
	int x1;
	int y1;
	int x2;
	int y2;
}				t_env;


int		ft_fdf(char *argv);
int		ft_create_map(char *argv);
int		ft_draw_map(int **map, int nblin, int nbcol);
int		ft_draw_line(int x1, int y1, int x2, int y2, t_env *fdf);

#endif
