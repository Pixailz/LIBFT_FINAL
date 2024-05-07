/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_raw.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:26:44 by brda-sil          #+#    #+#             */
/*   Updated: 2024/05/06 23:47:20 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_network/packet.h"

void	ft_pkt_print_raw(int fd, char *pkt, t_size size)
{
	t_size	i;
	t_size	index;

	i = 0;
	index = 0;
	while (i < size)
	{
		if (i % 16 == 0)
		{
			ft_dprintf(fd, "0x%04x:   ", index * 16);
			index++;
		}
		ft_dprintf(fd, "%02x", (unsigned char)pkt[i]);
		i++;
		if (i % 16 == 0)
			ft_dprintf(fd, "\n");
		else if (i % 4 == 0)
			ft_dprintf(fd, "   ");
		else if (i % 2 == 0)
			ft_dprintf(fd, " ");
	}
	if (i % 16)
		ft_dprintf(fd, "\n");
}
