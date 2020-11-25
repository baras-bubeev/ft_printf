/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 02:09:47 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/25 02:31:31 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	ft_print(int n, int base)
{
	static int	count;

	count = 0;
	if (n == -2147483648)
		count += write(1, "2147483648", 10);
	else
	{
		(n < 0) ? n *= -1 : 0;
		(n > (base - 1)) ? ft_print(n / base, base) : 0;
		write(1, &DEC[n % base], 1);
		count++;
	}
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

static int	ft_numlen(int n, int base)
{
	static int	count;

	count = 0;
	if (n == -2147483648)
		return (10);
	(n < 0) ? n *= -1 : 0;
	(n > (base - 1)) ? ft_numlen(n / base, base) : 0;
	count++;
	return (count);
}

static int	ft_right(t_parse *prs, int n, int base)
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
	if (prs->fill == ' ')
		(n >= 0) ? (count += ft_sign(prs)) : (count += write(1, "-", 1));
	while (prs->prec > len && prs->prec--)
		count += write(1, "0", 1);
	(n || prs->prec) ? count += ft_print(n, base) : 0;
	return (count);
}

int			ft_print_num(t_parse *prs, int n, int base)
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
		(n >= 0) ? (prs->width -= count += ft_sign(prs)) :
			(prs->width -= count += write(1, "-", 1));
		while (prs->prec > len && prs->prec--)
			count += write(1, "0", 1);
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
