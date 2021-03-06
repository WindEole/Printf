/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <iderighe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:17:05 by iderighe          #+#    #+#             */
/*   Updated: 2021/03/06 14:55:50 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

//# define TYPES "cspdiuxX%"

typedef struct	s_flags
{
	int			zero;
	int			minus;
	int			star;
	int			dot;
	int			width;
	int			type;
}				t_flags;

int				ft_printf(const char *input, ...);
int				ft_exam_save(const char *save, va_list args);
int				ft_exam_flags(const char *save, int i, t_flags *flags, va_list ap);
int				ft_exam_type(int a, t_flags *flags, va_list ap);
int				ft_isatype(int a);
int				ft_isaflag(int a);
t_flags			ft_init_flags(void);
t_flags			ft_flag_width(va_list ap, t_flags flags);
t_flags			ft_flag_digit(char c, t_flags flags);
t_flags			ft_flag_minus(t_flags flags);
int				ft_flag_dot(const char *save, int i, t_flags *flags, va_list ap);
char			*ft_strdup(const char *s1);
size_t			ft_strlen(const char *str);
int				ft_putchar(char c);
int				ft_isdigit(int c);
int				ft_putstr(char *str);
char			*ft_itoa(int n);
char			*ft_itoa_ui(unsigned int n);
int				ft_putstrprec(char *str, int prec);

int				ft_type_is_c(va_list ap, t_flags *flags);
int				ft_type_is_s(char *str, t_flags *flags);
int				ft_type_is_int(int input, t_flags *flags);
int				ft_type_is_unint(unsigned int input, t_flags *flags);

int				ft_partstr(char *str, t_flags flags);
int				ft_type_is_percent(t_flags *flags);
int				ft_treat_width(int width, int minus, int has_zero);

int				ft_intparseflags(int input, char *str_input, int minus, t_flags *flags);
int				ft_widthnodot(int input, char *str_input, int minus, t_flags *flags);
int				ft_widthnodot2(int input, char *str_input, int minus, t_flags *flags);
int				ft_widthanddot(char *str_input, int minus, t_flags *flags);
int				ft_widthanddot2(char *str_input, int minus, t_flags *flags);
int				ft_diminus(int minus);
int				ft_fillwidthzero(int minus, char *str_input, t_flags flags);
int				ft_fillwidthspace(int minus, char *str_input, t_flags flags);
int				ft_filldotzero(char *str_input, t_flags flags);
int				ft_fillwidthspacedot(int minus, char *str_input, t_flags flags);

int				ft_unintparse(char *str_input, t_flags *flags);
int				ft_fillwidthspace_ui(char *str_input, t_flags flags);
//int				ft_filldotzero_ui(char *str_input, t_flags flags);

#endif
