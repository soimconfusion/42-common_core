/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_obg_libft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:03:46 by anferrei          #+#    #+#             */
/*   Updated: 2024/11/05 12:56:32 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
	printf("\n");
}

int	main_obg(void)
{
	printf("%i %i ", ft_isalpha('a'), ft_isalpha('3'));
	printf("%i %i ", ft_isdigit('a'), ft_isdigit('3'));
	printf("%i %i ", ft_isalnum('a'), ft_isalnum('3'));
	printf("%i %i ", ft_isascii('a'), ft_isascii(132));
	printf("%i %i ", ft_isprint('a'), ft_isprint('\r'));
	printf("%s, %s\n", ft_toupper("AaaA"), ft_tolower("AaaA"));
	
	printf("%lu, %lu ", ft_strlcpy("", "a", 2), strlcpy("", "a", 2));
	printf("%lu, %lu ", ft_strlcat ("aaa", "b", 2), strlcat("aaa", "b", 2));
	printf("%lu %lu ", ft_strlen("aa"), ft_strlen(""));
	char *str1 = "aaaaaaa";
	char *str2 = "aaaaaa ";
	int res = strncmp(str1, str2, 13);
	int resft = ft_strncmp(str1, str2, 13);
	printf( "%d  %d\n", res, resft);

	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
 	char *d1r = strrchr(src, '\0');
 	char *d2r = ft_strrchr(src, '\0');
 	char *d1 = strchr(src, '\0');
 	char *d2 = ft_strchr(src, '\0');
	printf("%s %s %s %s\n", d1r, d2r, d1, d2);

	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr = ft_strnstr(largestring, smallstring, 11);
	char *ptrn = ft_strnstr(largestring, smallstring, 4);
	char *ptrb = ft_strnstr(largestring, "\0", 11);
	printf("%s %s %s", ptr, ptrn, ptrb);

	char str[5] = "aaa";
	char strf[5] = "aaa";
	printf("%s ", (char*)memset(str + 2, '.', 2*sizeof(char)));
	printf("%s ", (char *)ft_memset(strf + 2, '.', 2));
	printf("%s %s\n", str, strf);
	
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


    char src1[] = "Hello, World!";
    char dest1[20] = {0};
    ft_memcpy(dest1, src1, strlen(src1) + 1);
	printf("Source: %s\n", src1);
    printf("Destination: %s\n\n", dest1);

    char src2[] = "OpenAI";
    char dest2[10] = "XXXXXXXX";
    ft_memcpy(dest2, src2, 4);
    printf("Source: %s\n", src2);
    printf("Destination: %s\n\n", dest2);

	char *src4 = "Test";
    char *dest4 = "Test";
    ft_memcpy(dest4, src4, 0);
    printf("Source: %s\n", src4);
    printf("Destination: %s\n\n", dest4);

    void *result = ft_memcpy(NULL, NULL, 5);
    printf(" %p\n\n", result);

	char *str = "baaa";
	char *strf = "baaa";
	char *res = (char *)memchr(str, 'a', 2);
	char *resft = (char *)ft_memchr(strf, 'a', 3);
	printf ("%s %s", res, resft);

	
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

	
	char *str = "   -0012g4";
	printf("%d %d", atoi(str), ft_atoi(str));

	int n = 5;
	int *array;
   // use calloc function to allocate the memory
	 array = (int*)ft_calloc(n, sizeof(int));
   //Display the array value
   printf("Array elements after calloc: ");
   for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n"); 
   //free the allocated memory
   free(array);

	char source[] = "kkaa";"
    char* targ = ft_strdup(source); 
    printf("%s", targ);
	return (0);
}
