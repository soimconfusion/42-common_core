/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:07:16 by anferrei          #+#    #+#             */
/*   Updated: 2024/11/12 15:09:34 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_nbr(int nb)
{
	char	*nb_to_str;
	int		count;

	count = 0;
	nb_to_str = ft_itoa(nb);
	count = ft_printstr(nb_to_str);
	free(nb_to_str); //itoa aloca memoria ???
	return (count);
}
