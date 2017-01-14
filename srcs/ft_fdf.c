/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:17:59 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/14 22:04:38 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		ft_fdf(char *argv)
{
	t_env	fdf;

	ft_bzero(&fdf, sizeof(t_env));
	//	ft_check(argv); PARSER OKLM
	ft_create_map(argv, &fdf);
	ft_mlx(&fdf); // Dessiner map avec algo de Bresenham
	free(*(fdf.map.map));
	return (0);
}
