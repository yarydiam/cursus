/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:47:31 by yadiaman          #+#    #+#             */
/*   Updated: 2024/05/10 10:47:31 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unisned char *tmp;
    size_t i;
    i = 0;
    tmp = malloc(count * size);
    if (!tmp)
        return (NULL);
    while (i < count * size)
        tmp[i++] = 0;
    return (tmp);
}