/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 02:09:47 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/25 02:48:35 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	ft_print(long int n, int base)
{
	static int	count;

	count = 0;
	(n > (base - 1)) ? ft_print(n / base, base) : 0;
	count += write(1, &HEX[n % base], 1);
	return (count);
}

static int	ft_numlen(long int n, int base)
{
	static int	count;

	count = 0;
	(n > (base - 1)) ? ft_numlen(n / base, base) : 0;
	count++;
	return (count);
}

static int	ft_right(t_parse *prs, long int n, int base)
{
	int	count;
	int	len;

	count = 0;
	len = ft_numlen(n, base);
	(n || prs->prec) ? prs->width -= len : 0;
	(prs->fill == '0') ? count += write(1, PREFIX, ft_strlen(PREFIX)) : 0;
	while (prs->width > 0 && prs->width > prs->prec - len)
	{
		prs->width -= write(1, &prs->fill, 1);
		count++;
	}
	(prs->fill == ' ') ? count += write(1, PREFIX, ft_strlen(PREFIX)) : 0;
	while (prs->prec > len && prs->prec--)
		count += write(1, "0", 1);
	(n || prs->prec) ? count += ft_print(n, base) : 0;
	return (count);
}

int			ft_print_p(t_parse *prs, long int n, int base)
{
	int	count;
	int	len;

	count = 0;
	len = ft_numlen(n, base);
	(prs->prec >= 0) ? prs->fill = ' ' : 0;
	prs->width -= ft_strlen(PREFIX);
	if (prs->align == TRUE)
	{
		(prs->prec > len) ? (prs->width -= prs->prec) : (prs->width -= len);
		(!n && !prs->prec) ? prs->width++ : 0;
		while (prs->prec > len && prs->prec--)
			count += write(1, "0", 1);
		count += write(1, PREFIX, ft_strlen(PREFIX));
		(n || prs->prec) ? count += ft_print(n, base) : 0;
		while (prs->width > 0)
		{
			prs->width -= write(1, " ", 1);
			count++;
		}
	}
	else
		count += ft_right(prs, n, base);
	return (count);
}
