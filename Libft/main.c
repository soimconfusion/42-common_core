#include <stdio.h>
#include "libft.h"

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
	printf("\n");
}

int	main(void)
{
	printf("%d %d %d ", isalpha('a'), isalpha('3'), isalpha(''));
	printf("%d %d %d ", isdigit('a'), isdigit('3'), isdigit(''));
	printf("%d %d %d ", isalnum('a'), isalnum('3'), isalnum(''));
	printf("%d %d %d ", isascii('a'), isascii(132), isascii(''));
	printf("%d %d %d ", isalpha('a'), isprint('\r'), isprint(''));
	printf("%d %d ", strlen("aa"), strlen(""));
	
	
	char str[5] = "aaa";
	char strf[5] = "aaa";
	printf("%s ", (char*)memset(str + 2, '.', 2*sizeof(char)));
	printf("%s ", (char *)ft_memset(strf + 2, '.', 2));
	printf("%s\n", str);
	
	int n = 10;
    int arr[n];
	memset(arr, 1, n*sizeof(arr[0]));
	printf("Array after memset()\n");
	printArray(arr, n);

	int m = 10;
	int farr[m] = { }
	ft_memset(farr, 1, m*sizeof(arr[0]));
    printf("Array after ft_memset()\n");
    printArray(farr, m);

	printf ("%s %s\n", bezro(str, 5), ft_bzero(strf, 5));
	
	return (0);
}
