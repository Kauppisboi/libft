/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrignell <jrignell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:33:56 by jrignell          #+#    #+#             */
/*   Updated: 2019/12/11 20:08:59 by jrignell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/includes/libft.h"

# include <stdio.h> // DEV

/*
typedef struct	s_struct
{
	int		parameter;
	int		flags;
	int		width;
	int		precision;
	int		length;
	int		type;
}				t_syntax;
*/

int				ft_printf(const char *format, ...);
int				ft_parse_str_char_ptr(char *str, va_list ap);
//t_syntax		ft_put_zero(void);

#endif