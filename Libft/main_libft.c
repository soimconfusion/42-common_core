/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:03:46 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/24 15:24:59 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
	printf("\n");
}

int	main(void)
{
	printf("%i %i ", isalpha('a'), isalpha('3'));
	printf("%i %i ", isdigit('a'), isdigit('3'));
	printf("%i %i ", isalnum('a'), isalnum('3'));
	printf("%i %i ", isascii('a'), isascii(132));
	printf("%i %i ", isalpha('a'), isprint('\r'));
	printf("%lu %lu ", strlen("aa"), strlen(""));
	char str[5] = "aaa";
	char strf[5] = "aaa";
	printf("%s ", (char*)memset(str + 2, '.', 2*sizeof(char)));
	printf("%s ", (char *)ft_memset(strf + 2, '.', 2));
	printf("%s\n", str);
	int n = 10;
    int arr[n];
	memset(arr, 0, n*sizeof(arr[0]));
	printf("Array after memset()\n");
	printArray(arr, n);
	int m = 10;
	int farr[m]; 
	ft_memset(farr, 0, m*sizeof(arr[0]));
    printf("Array after ft_memset()\n");
    printArray(farr, m);
	bzero(str, 1);
	ft_bzero(strf, 1);
	printf ("%s %s\n", str, strf);
	char *str = "   -0012g4";
	printf("%d %d", atoi(str), ft_atoi(str));	
	return (0);
}
