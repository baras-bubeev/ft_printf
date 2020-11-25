/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 02:09:47 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/25 01:02:54 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int			ft_print_str(t_parse *prs, char *s)
{
	int	count;
	int	len;

	count = 0;
	if (!s)
		return (ft_print_str(prs, "(null)"));
	len = ft_strlen(s);
	if (prs->prec < 0 || prs->prec > len)
		prs->prec = len;
	if (prs->align == TRUE)
	{
		count += write(1, s, (len < prs->prec) ? len : prs->prec);
		while (count < prs->width)
			count += write(1, " ", 1);
	}
	else
	{
		prs->width -= (len < prs->prec) ? len : prs->prec;
		while (count < prs->width)
			count += write(1, &prs->fill, 1);
		count += write(1, s, (len < prs->prec) ? len : prs->prec);
	}
	return (count);
}
