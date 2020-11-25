/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 03:12:31 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/25 01:21:15 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%+10d| jnjn\n", -42));
	printf("a2 = %i\n", printf("a2 = hello |%+10d| jnjn\n", -42));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%+10d| jnjn\n", 42));
	printf("a2 = %i\n", printf("a2 = hello |%+10d| jnjn\n", 42));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%+010d| jnjn\n", 42));
	printf("a2 = %i\n", printf("a2 = hello |%+010d| jnjn\n", 42));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |% +010d| jnjn|% 10d|\n", -42, -2));
	printf("a2 = %i\n", printf("a2 = hello |% +010d| jnjn|% 10d|\n", -42, -2));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |% -+010d| jnjn|% 10d|\n", 42, 2));
	printf("a2 = %i\n", printf("a2 = hello |% -+010d| jnjn|% 10d|\n", 42, 2));

	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-010.*d| jnjn\n", -1, -42));
	printf("a2 = %i\n", printf("a2 = hello |%+-010.*d| jnjn\n", -1, -42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+010.*d| jnjn\n", -1, -42));
	printf("a2 = %i\n", printf("a2 = hello |%+010.*d| jnjn\n", -1, -42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+010.d| jnjn\n", -42));
	printf("a2 = %i\n", printf("a2 = hello |%+010.d| jnjn\n", -42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+010.*d| jnjn\n", -1, 0));
	printf("a2 = %i\n", printf("a2 = hello |%+010.*d| jnjn\n", -1, 0));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+010.d| jnjn\n", 0));
	printf("a2 = %i\n", printf("a2 = hello |%+010.d| jnjn\n", 0));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+10.*d| jnjn\n", -1, 0));
	printf("a2 = %i\n", printf("a2 = hello |%+10.*d| jnjn\n", -1, 0));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+10.*d| jnjn\n", 5, 42));
	printf("a2 = %i\n", printf("a2 = hello |%+10.*d| jnjn\n", 5, 42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+10.*d| jnjn\n", 2, 42));
	printf("a2 = %i\n", printf("a2 = hello |%+10.*d| jnjn\n", 2, 42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+010.*d| jnjn\n", 3, -42));
	printf("a2 = %i\n", printf("a2 = hello |%+010.*d| jnjn\n", 3, -42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+010.*d| jnjn\n", -3, -42));
	printf("a2 = %i\n", printf("a2 = hello |%+010.*d| jnjn\n", -3, -42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+010.*d| jnjn\n", -3, 42));
	printf("a2 = %i\n", printf("a2 = hello |%+010.*d| jnjn\n", -3, 42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%05.*d| jnjn\n", 6, 42));
	printf("a2 = %i\n", printf("a2 = hello |%05.*d| jnjn\n", 6, 42));

	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-10.*d| jnjn\n", -1, -42));
	printf("a2 = %i\n", printf("a2 = hello |%+-10.*d| jnjn\n", -1, -42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-10.*d| jnjn\n", -1, -42));
	printf("a2 = %i\n", printf("a2 = hello |%+-10.*d| jnjn\n", -1, -42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-10.d| jnjn\n", -42));
	printf("a2 = %i\n", printf("a2 = hello |%+-10.d| jnjn\n", -42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-10.*d| jnjn\n", -1, 0));
	printf("a2 = %i\n", printf("a2 = hello |%+-10.*d| jnjn\n", -1, 0));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-10.d| jnjn\n", 0));
	printf("a2 = %i\n", printf("a2 = hello |%+-10.d| jnjn\n", 0));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-10.*d| jnjn\n", -1, 0));
	printf("a2 = %i\n", printf("a2 = hello |%+-10.*d| jnjn\n", -1, 0));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-10.*d| jnjn\n", 5, 42));
	printf("a2 = %i\n", printf("a2 = hello |%+-10.*d| jnjn\n", 5, 42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-10.*d| jnjn\n", 2, 42));
	printf("a2 = %i\n", printf("a2 = hello |%+-10.*d| jnjn\n", 2, 42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-10.*d| jnjn\n", 3, -42));
	printf("a2 = %i\n", printf("a2 = hello |%+-10.*d| jnjn\n", 3, -42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-10.*d| jnjn\n", -3, -42));
	printf("a2 = %i\n", printf("a2 = hello |%+-10.*d| jnjn\n", -3, -42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%+-10.*d| jnjn\n", -3, 42));
	printf("a2 = %i\n", printf("a2 = hello |%+-10.*d| jnjn\n", -3, 42));
	ft_printf("a1 = %i\n", ft_printf("a2 = hello |%-5.*d| jnjn\n", 6, 42));
	printf("a2 = %i\n", printf("a2 = hello |%-5.*d| jnjn\n", 6, 42));


	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-5.*u| jnjn\n", 15, -2147483648));
	printf("a2 = %i\n", printf("a2 = hello |%-5.*u| jnjn\n", 15, -2147483648));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-5.*u| jnjn\n", 15, -1));
	printf("a2 = %i\n", printf("a2 = hello |%-5.*u| jnjn\n", 15, -1));

	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-5.*x| jnjn\n", 15, 4294967295));
	printf("a2 = %i\n", printf("a2 = hello |%-5.*x| jnjn\n", 15, 4294967295));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-5.*X| jnjn\n", 15, 4294967295));
	printf("a2 = %i\n", printf("a2 = hello |%-5.*X| jnjn\n", 15, 4294967295));

	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-5c| jnjn\n", "abx"));
	printf("a2 = %i\n", printf("a2 = hello |%-5c| jnjn\n", "abx"));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-5c| jnjn\n", 'a'));
	printf("a2 = %i\n", printf("a2 = hello |%-5c| jnjn\n", 'a'));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%5c| jnjn\n", 'a'));
	printf("a2 = %i\n", printf("a2 = hello |%5c| jnjn\n", 'a'));

	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%020.10s| jnjn\n", "hello, world!"));
	printf("a2 = %i\n", printf("a2 = hello |%020.10s| jnjn\n", "hello, world!"));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-020.10s| jnjn\n", "hello, world!"));
	printf("a2 = %i\n", printf("a2 = hello |%-020.10s| jnjn\n", "hello, world!"));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-020.s| jnjn\n", "hello, world!"));
	printf("a2 = %i\n", printf("a2 = hello |%-020.s| jnjn\n", "hello, world!"));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%020.s| jnjn\n", "hello, world!"));
	printf("a2 = %i\n", printf("a2 = hello |%020.s| jnjn\n", "hello, world!"));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%020.15s| jnjn\n", "hello, world!"));
	printf("a2 = %i\n", printf("a2 = hello |%020.15s| jnjn\n", "hello, world!"));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-020.15s| jnjn\n", "hello, world!"));
	printf("a2 = %i\n", printf("a2 = hello |%-020.15s| jnjn\n", "hello, world!"));

	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%020.*s| jnjn\n", -1, "hello, world!"));
	printf("a2 = %i\n", printf("a2 = hello |%020.*s| jnjn\n", -1, "hello, world!"));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-020.*s| jnjn\n", -1, "hello, world!"));
	printf("a2 = %i\n", printf("a2 = hello |%-020.*s| jnjn\n", -1, "hello, world!"));

	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-020.*s| jnjn\n", -1, NULL));
	printf("a2 = %i\n", printf("a2 = hello |%-020.*s| jnjn\n", -1, NULL));

	char	*str = "hello";
	char	*s = "\0";
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%-020.*p| jnjn\n", -1, &str));
	printf("a2 = %i\n", printf("a2 = hello |%-020.*p| jnjn\n", -1, &str));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%020.15p| jnjn\n", &s));
	printf("a2 = %i\n", printf("a2 = hello |%020.15p| jnjn\n", &s));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%020.5p| jnjn\n", &s));
	printf("a2 = %i\n", printf("a2 = hello |%020.5p| jnjn\n", &s));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%020.p| jnjn\n", 0));
	printf("a2 = %i\n", printf("a2 = hello |%020.p| jnjn\n", 0));
	ft_printf("a1 = %i\n", ft_printf("a1 = hello |%p| jnjn\n", NULL));
	printf("a2 = %i\n", printf("a2 = hello |%p| jnjn\n", NULL));
	printf("|%020p|\n", &str);
	ft_printf("*|%020p|\n", &str);
	printf("%ZZZFFFFF\n", "help");
	ft_printf("%ZZZFFFFF\n", "help");

}