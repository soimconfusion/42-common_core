/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:16:36 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/22 18:25:26 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n --)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1 ++;
		str2 ++;
	}
	return (0);
}
/*
int	main(void)
{
	char *str1 = "aaaa";
	char *str2 = "aaa ";
	int res = memcmp(str1, str2, 3);
	int resf = ft_memcmp(str1, str2, 3);
	printf("%d %d ", res, resf);

	int arr1[] = {1, 2, 3, 4};
	int arr2[] = {1, 2, 3};
	res = memcmp(arr1, arr2, sizeof(arr1));
	resf = ft_memcmp(arr1, arr2, sizeof(arr2));
	printf("%d, %d", res, resf);
	return (0);
}*/
