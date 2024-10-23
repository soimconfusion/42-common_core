#include <ctype.h>
#include <stdio.h>
int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		i -= 32;
	return ((unsigned char)i);
}

//if not uns char behaviour undefined
int	main (void)
{
	char ch = toupper(125);
	char ch_ft = ft_toupper('x');
	printf ("%c", ch);
	printf ("%c", ch_ft);
}
