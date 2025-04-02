/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:57:47 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/02 16:24:37 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *p_src;
    unsigned char   *p_dest;

    p_src = (unsigned char *)src;
    p_dest = (unsigned char *)dest;
    while (n > 0)
    {
        *p_dest = *p_src;
        p_dest++;
        p_src++;
        n--;
    }
    return (dest);
}