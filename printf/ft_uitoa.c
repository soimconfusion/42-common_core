static unsigned int	ft_nb_size(unsigned int nb)
{
	unsigned int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	unsigned int	len;
	char			*str;

	len = ft_nb_size(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	string[len] = '\0';
	while (n != 0)
	{
		string[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}