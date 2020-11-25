/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:25:57 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/25 02:24:29 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

#include<stdio.h> /*DELETE!!!*/
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# define TYPE "cspdiuxX%"
# define FLAG "0123456789*.+- "
# define TRUE 1
# define FALSE 0
# define FT_ISDIGIT(c) ((c) >= '0' && (c) <= '9')
# define DEC "0123456789"
# define HEX "0123456789abcdef"
# define HEXX "0123456789ABCDEF"
# define PREFIX "0x"

typedef int			t_bool;

typedef struct		s_parse
{
	int				width;
	int				prec;
	t_bool			sign;
	t_bool			align;
	t_bool			space;
	char			fill;
	void			*p;
}					t_parse;

int					ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
int					ft_printf(const char *, ...);
int					ft_parsing(const char **s, va_list ap);
int					ft_get_type(t_parse *prs, const char **s, va_list ap);
int					ft_print_num(t_parse *prs, int n, int base);
int					ft_print_unum(t_parse *prs, unsigned int n,
					int base, char c);
int					ft_print_chr(t_parse *prs, int c);
int					ft_print_str(t_parse *prs, char *s);
int					ft_print_p(t_parse *prs, long int n, int base);

#endif
