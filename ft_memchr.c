/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:26:18 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/02 12:42:20 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *p_s;
    unsigned char   occ;

    i = 0;
    p_s = (unsigned char *)s;
    occ = (unsigned char)c;
    while (i < n)
    {
        if (p_s[i] == occ)
            return ((void *)(p_s + i));
        i++;
    }
    return (NULL);
}