/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:11:48 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/02 17:07:45 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    unsigned char    *tmp;
    size_t      i;

    i = 0;
    tmp = malloc(count * size);
    if (!tmp)
        return (NULL);
    while (i < count * size)
    {
        tmp[i] = 0;
        i++;
    }
    return (tmp);
}