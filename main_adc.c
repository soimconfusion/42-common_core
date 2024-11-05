#include <stdio.h>

int	main(void)
{
	const char *str = "i just want this part #############";
	char *res = ft_substr(str, 5, 10);
	printf("%s ", res);
	char *str2 = "01234";
 	size_t size = 10;
 	char *ret = ft_substr(str2, 10, size);
	printf("%s\n", ret);

	char *s1 = "aa";
	char *s2 = "";
	char *s3 = "kk";
	printf("%s\n",ft_strjoin(ft_strjoin(s1, s3), s2));

	char *s4 = "aaaaabzasaadg";
	char *set = "basdf";
	char * res = ft_strtrim(s4, set);
	printf("%s ", res);
	res = strtrim(s4, set);
	printf("%s\n", res);

	int	n = 0;
	//int n1 = 123;
	//int n2 = -200;
	printf ("%s %s\n", ft_itoa(n), itoa(n));
	return (0);
}
