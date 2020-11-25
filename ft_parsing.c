/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 04:04:16 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/25 03:51:41 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_get_prec(const char **s, va_list ap)
{
	int		prec;

	prec = 0;
	(*s)++;
	if (**s == '*')
		prec = va_arg(ap, int);
	else
	{
		while (FT_ISDIGIT(**s))
		{
			prec = prec * 10 + (**s - '0');
			(*s)++;
		}
		(*s)--;
	}
	return (prec);
}

static int	ft_get_width(const char **s, va_list ap)
{
	int		width;

	width = 0;
	if (**s == '*')
		width = va_arg(ap, int);
	else
	{
		while (FT_ISDIGIT(**s))
		{
			width = width * 10 + (**s - '0');
			(*s)++;
		}
		(*s)--;
	}
	return (width);
}

int			ft_parsing(const char **s, va_list ap)
{
	t_parse	prs;

	prs.prec = -1;
	prs.width = 0;
	prs.sign = FALSE;
	prs.align = FALSE;
	prs.space = FALSE;
	prs.fill = ' ';
	while (ft_strchr(FLAG, **s) && **s)
	{
		(**s == '0') ? prs.fill = '0' : 0;
		(**s == '*' || (FT_ISDIGIT(**s) && **s != '0')) ?
			prs.width = ft_get_width(s, ap) : 0;
		(**s == '.') ? prs.prec = ft_get_prec(s, ap) : 0;
		(prs.width < 0 && (prs.width *= -1)) ? prs.align = TRUE : 0;
		(**s == '+') ? prs.sign = TRUE : 0;
		(**s == '-') ? prs.align = TRUE : 0;
		(**s == ' ') ? prs.space = TRUE : 0;
		(*s)++;
	}
	if (ft_strchr(TYPE, **s))
		return (ft_get_type(&prs, s, ap));
	return (0);
}
