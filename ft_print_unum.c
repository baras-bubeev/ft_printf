/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 02:09:47 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/25 03:51:54 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_print(unsigned int n, unsigned int base, char c)
{
	static int	count;

	count = 0;
	(n > (base - 1)) ? ft_print(n / base, base, c) : 0;
	(c == 'u') ? write(1, &DEC[n % base], 1) : 0;
	(c == 'x') ? write(1, &HEX[n % base], 1) : 0;
	(c == 'X') ? write(1, &HEXX[n % base], 1) : 0;
	count++;
	return (count);
}

static int	ft_sign(t_parse *prs)
{
	int	count;

	count = 0;
	if (prs->sign == TRUE)
		count += write(1, "+", 1);
	else if (prs->space == TRUE)
		count += write(1, " ", 1);
	return (count);
}

static int	ft_numlen(unsigned int n, unsigned int base)
{
	static int	count;

	count = 0;
	(n > (base - 1)) ? ft_numlen(n / base, base) : 0;
	count++;
	return (count);
}

static int	ft_right(t_parse *prs, unsigned int n, unsigned int base, char c)
{
	int	count;
	int	len;

	count = 0;
	len = ft_numlen(n, base);
	if (prs->fill == '0')
		(n >= 0) ? (prs->width -= count += ft_sign(prs)) :
			(prs->width -= count += write(1, "-", 1));
	else
		(prs->sign || prs->space || n < 0) ? prs->width-- : 0;
	(n || prs->prec) ? prs->width -= len : 0;
	while (prs->width > 0 && prs->width > prs->prec - len)
	{
		prs->width -= write(1, &prs->fill, 1);
		count++;
	}
	(prs->fill == ' ') ? (count += ft_sign(prs)) : 0;
	while (prs->prec > len && prs->prec--)
		count += write(1, "0", 1);
	(n || prs->prec) ? count += ft_print(n, base, c) : 0;
	return (count);
}

int			ft_print_unum(t_parse *prs, unsigned int n,
			unsigned int base, char c)
{
	int	count;
	int	len;

	count = 0;
	len = ft_numlen(n, base);
	(prs->prec >= 0) ? prs->fill = ' ' : 0;
	if (prs->align == TRUE)
	{
		(prs->prec > len) ? (prs->width -= prs->prec) : (prs->width -= len);
		(!n && !prs->prec) ? prs->width++ : 0;
		(prs->width -= count += ft_sign(prs));
		while (prs->prec > len && prs->prec--)
			count += write(1, "0", 1);
		(n || prs->prec) ? count += ft_print(n, base, c) : 0;
		while (prs->width > 0)
		{
			prs->width -= write(1, " ", 1);
			count++;
		}
	}
	else
		count += ft_right(prs, n, base, c);
	return (count);
}
