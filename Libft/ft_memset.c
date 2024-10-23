/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:40:44 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/23 15:44:08 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i ++;
	}
	return (s);
}
/*
void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int	main(void)
{
	char str[5] = "aaa";
	//printf("%s ", (char*)memset(str + 2, '.', 2*sizeof(char)));
	printf("%s ", (char *)ft_memset(str + 2, '.', 2));
	printf("%s\n", str);
	
	int n = 10;
    int arr[n];
    memset(arr, 0, n*sizeof(arr[0]));
   // printf("Array after memset()\n");
   // printArray(arr, n);

	int m = 10;
   // int farr[m] = { }
    //ft_memset(farr, 1, 6*sizeof(arr[2]));
    //printf("Array after ft_memset()\n");
    //printArray(farr, m);		
}*/
