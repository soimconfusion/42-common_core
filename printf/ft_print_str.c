/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:01:38 by anferrei          #+#    #+#             */
/*   Updated: 2024/11/12 18:53:30 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putstr(char	*str)
{
	int	count;

	count = 0;
	while(str)
	{
		count += write(1, str, 1);
		++str;
	}
	return (count);
}