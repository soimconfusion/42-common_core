int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		i += 32;
	return ((unsigned char)i);
}
