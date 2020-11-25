/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:03:14 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/25 03:51:38 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_get_type(t_parse *prs, const char **s, va_list ap)
{
	int	count;

	if (**s == 'd')
		count = ft_print_num(prs, va_arg(ap, int), 10);
	if (**s == 'i')
		count = ft_print_num(prs, va_arg(ap, int), 10);
	if (**s == 'u')
		count = ft_print_unum(prs, va_arg(ap, unsigned int), 10, **s);
	if (**s == 'x')
		count = ft_print_unum(prs, va_arg(ap, unsigned int), 16, **s);
	if (**s == 'X')
		count = ft_print_unum(prs, va_arg(ap, unsigned int), 16, **s);
	if (**s == 'c')
		count = ft_print_chr(prs, va_arg(ap, int));
	if (**s == 's')
		count = ft_print_str(prs, va_arg(ap, char *));
	if (**s == '%')
		count = ft_print_chr(prs, '%');
	if (**s == 'p')
		count = ft_print_p(prs, va_arg(ap, long int), 16);
	(*s)++;
	return (count);
}
