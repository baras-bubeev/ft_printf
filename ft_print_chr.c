/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 02:09:47 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/25 02:56:16 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int			ft_print_chr(t_parse *prs, int c)
{
	int	count;

	count = 0;
	if (prs->align == TRUE)
	{
		prs->width -= count += write(1, &c, 1);
		while (prs->width > 0)
		{
			prs->width -= write(1, " ", 1);
			count++;
		}
	}
	else
	{
		prs->width--;
		while (prs->width > 0)
		{
			prs->width -= write(1, &prs->fill, 1);
			count++;
		}
		count += write(1, &c, 1);
	}
	return (count);
}
