/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:34:27 by brda-sil          #+#    #+#             */
/*   Updated: 2023/10/12 19:48:39 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_print.h"

int	ft_print_err(char *msg, int r_value)
{
	ft_dprintf(2, "%s%s\n", P_ERR, msg);
	return (r_value);
}
