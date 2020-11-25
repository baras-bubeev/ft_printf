/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 01:52:28 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/25 03:06:38 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>

int main(){

	char	*str;
	str = "hello";
	char	*line;
	line = "\0";

	// printf("a1 = %i\n", printf("%ZZZFFFFF\n", "help"));
	// ft_printf("a2 = %i\n", ft_printf("%ZZZFFFFF\n", "help"));
	// printf("a1 = %i\n", printf("a1 = %%05.*d|* = 0|                            |{%05.*d}\n", 0, 42));
	// ft_printf("a2 = %i\n", ft_printf("a2 = %%05.*d|* = 0|                            |{%05.*d}\n", 0, 42));
	// printf("a1 = %i\n", printf("a1 = %15p %*.7d MIXED %*.*s TEST! %%%05%%% I %10.7u H%dPE %c%c %.3sSH %10.6x%-7.5X YOUR PRINTF!%%\n", &str, 8, -42, -5, 3, "woop", 15975, 0, 'I', 'T', "CRASH", 15, 15013));
	// ft_printf("a2 = %i\n", ft_printf("a2 = %15p %*.7d MIXED %*.*s TEST! %%%05%%% I %10.7u H%dPE %c%c %.3sSH %10.6x%-7.5X YOUR PRINTF!%%\n", &str, 8, -42, -5, 3, "woop", 15975, 0, 'I', 'T', "CRASH", 15, 15013));
	
	printf("06) standart PRINTF : |");
	printf("%%%");
	printf("|\n");
	ft_printf("06) my       PRINTF : |");
	ft_printf("%%%");
	ft_printf("|\n\n");

}