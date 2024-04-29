/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:51:18 by yadiaman          #+#    #+#             */
/*   Updated: 2024/04/29 21:51:18 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strchr(const char *s, int c)
{
    while ((*str != '\0') && (*str != (char)c))
        str++;
    if (*str == (char)c)
        return ((char *)str);
    return (NULL);
}