/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minbrdsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 16:32:39 by sjones            #+#    #+#             */
/*   Updated: 2017/02/07 18:10:09 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		minbrdsize(t_tet *t)
{
	if (!(t))
		return (-1);
	return (ft_sqrtr((ft_lstlen(t) * 4)));
}
