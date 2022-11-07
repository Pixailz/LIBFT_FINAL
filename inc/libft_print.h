/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_print.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:16:35 by brda-sil          #+#    #+#             */
/*   Updated: 2022/11/07 04:15:59 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINT_H
# define LIBFT_PRINT_H

/* ########################################################################## */
/* INCLUDE */
/* ####### */

# ifndef LIBFT_DEFINE_H
#  include "libft_define.h"
# endif

# include <unistd.h>
/* write()
 **/

# include <stdarg.h>
/* va_arg()
 * va_list()
 * va_start()
 * va_end()
 **/

# include <errno.h>
/* errorno()
 **/

# include <stdio.h>
/* perror()
 **/

/* ########################################################################## */

/* ########################################################################## */
/* CONFIG */
/* ###### */

# define FT_PRINTF_PARAMS_LIST "cspdiuxX%"

/* ########################################################################## */

/* ########################################################################## */
/* REQUIREMENTS */
/* ############ */

# ifndef LIBFT_INTEGER

// ft_itoa_base.c
char	*ft_itoa_base(const t_int64 const_nb, const char *base);

// ft_nbrlen.c
t_size	ft_nbrlen(const void *void_nbr);

// ft_nbrlen_base.c
t_size	ft_nbrlen_base(const void *void_nbr, const char *base);

// ft_int4_dcomp.c
t_int1	ft_int4_dcomp(t_int4 n, int level);

# endif

# ifndef LIBFT_MEMORY

// ft_calloc.c
void	*ft_calloc(t_size nmemb, t_size size);

// ft_memset.c
void	*ft_memset(void *s, int c, t_size n);

# endif

# ifndef LIBFT_STRING

// ft_get_base.c
int		ft_get_base(int c, const char *base);

// ft_strlen.c
int		ft_strlen(char *str);

# endif

/* ########################################################################## */

/* ########################################################################## */
/* FILES */
/* ##### */

// ft_error.c
int		ft_error(char *msg, int return_code);

// ft_printf.c
size_t	ft_printf(const char *format, ...);

// ft_printf_fd.c
size_t	ft_printf_fd(int fd, const char *format, ...);

// ft_putchar_fd.c
size_t	ft_putchar_fd(char c, int fd);

// ft_putendl_fd.c
size_t	ft_putendl_fd(char const *s, int fd);

// ft_putip_fd.c
t_size	ft_putip_fd(t_int4 n, int fd);

// ft_putnbr_base_fd.c
size_t	ft_putnbr_base_fd(t_int64 n, const char *base, int fd);

// ft_putnbr_fd.c
size_t	ft_putnbr_fd(int n, int fd);

// ft_putstr_fd.c
size_t	ft_putstr_fd(char const *s, int fd);

// ft_putunbr_fd.c
size_t	ft_putunbr_fd(unsigned long n, int fd);

/* ########################################################################## */

#endif
