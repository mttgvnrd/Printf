/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:54:06 by mgiovana          #+#    #+#             */
/*   Updated: 2022/11/08 12:54:44 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_countdec(int n);
int		ft_counthex(unsigned long n);
int		ft_printchar(char c);
int		ft_printf(const char *str, ...);
void	ft_print_hex(unsigned long n);
int		ft_print_hex1(unsigned int n, char baseform);
int		ft_print_int(int n);
int		ft_print_pointer(unsigned long n);
int		ft_print_str(char *s);
int		ft_print_unsigned_int(unsigned int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_ft(const char a, va_list args, int count);
int		ft_count_unsigned_dec(unsigned int n);
void	ft_put_unsigned_nbr_fd(unsigned int n, int fd);

#endif
