/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:08:22 by yadiaman          #+#    #+#             */
/*   Updated: 2024/04/12 14:05:22 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(const char *str);
{
    size_t i;

    i = 0;

    while(str[i] != '\0')
    {
        i++;   
    }
    return(i);   
}