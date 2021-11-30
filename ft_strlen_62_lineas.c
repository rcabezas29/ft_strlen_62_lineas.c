/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_62_lineas.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:49:54 by rcabezas          #+#    #+#             */
/*   Updated: 2021/11/30 16:07:00 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

int	ft_strlen(char *str)
{
	int		i;
	char	*aux;
	int 	ret;
	int		error_ret;
	char	letter;
	int		increase;

	i = 0;
	aux = str;
	ret = 0;
	increase = 1;
	if (!str)
	{
		error_ret = 0;
		return (error_ret);
	}
	else
	{
		while (42)
		{
			letter = *aux;
			if (letter)
			{
				if (letter > 0)
				{
					if (letter < 127)
					{
						i = i + 1;
						ret = i;
					}
					else
					{
						break ;
					}
				}
				else
				{
					break ;
				}
			}
			else
			{
				break ;
			}
			aux += increase;
		}
	}
	return (ret);
}
