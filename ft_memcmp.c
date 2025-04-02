/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:17 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/02 16:51:01 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char   *p_s1;
    unsigned char   *p_s2;

    i = 0;
    p_s1 = (unsigned char *)s1;
    p_s2 = (unsigned char *)s2;
    while ((p_s1[i] || p_s2[i]) && i < n)
    {
        if (p_s1[i] != p_s2[i])
            return (p_s1[i] - p_s2[i]);
        i++;
    }
    return (0);
}