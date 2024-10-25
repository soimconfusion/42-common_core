/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:21:36 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/25 18:15:07 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len ++;
	if (n < 0)
		len ++;
	while (n != 0)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;

	i = int_len(n) - 1;
	num = (char *)malloc(int_len(n));
	if (!num)
		return (NULL);
	if (n == 0)
	{
		num[0] = '0';
		num[1] = '\0';
		return (num);
	}
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		num[i] = (n % 10) + '0';
		n = n / 10;
		i --;
	}
	return (num);
}

int	main(void)
{
	int	n = 0;
	int n1 = 123;
	int n2 = -200;
	printf ("%s %s %s ", ft_itoa(n), ft_itoa(n1), ft_itoa(n2));
	return (0);
}
