/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:44:13 by anferrei          #+#    #+#             */
/*   Updated: 2024/12/07 16:45:44 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(int c, int fd);
int	ft_print_str(char *str, int fd);
int	ft_print_uns(unsigned int n, int fd);
int	ft_print_hex(char format, unsigned int n, int fd);
int	ft_print_ptr(void *ptr, int fd);
int	ft_print_nbr(int nb, int fd);

#endif
