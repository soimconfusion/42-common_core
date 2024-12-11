/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:58:10 by anferrei          #+#    #+#             */
/*   Updated: 2024/12/07 17:11:58 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "header/ft_printf.h"

int	main(void)
{
	int	orig;
	int	ft;
	int	x;

	x = 42;
	orig = printf("orig: %c\n", 'A');
	ft = ft_printf("ft  : %c\n", 'A');
	printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);
	orig = printf("orig: %s\n", "Hello, world!");
	ft = ft_printf("ft  : %s\n", "Hello, world!");
	printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);
	orig = printf("orig: %p\n", &x);
	ft = ft_printf("ft  : %p\n", &x);
	printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);
	orig = printf("orig: %d, %i\n", 123, -456);
	ft = ft_printf("ft  : %d, %i\n", 123, -456);
	printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);
	orig = printf("orig: %u\n", 3000000000U);
	ft = ft_printf("ft  : %u\n", 3000000000U);
	printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);
	orig = printf("orig: %x, %X\n", 48879, 48879);
	ft = ft_printf("ft  : %x, %X\n", 48879, 48879);
	printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);
	orig = printf("orig: %%\n");
	ft = ft_printf("ft  : %%\n");
	printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);
	return (0);
}
