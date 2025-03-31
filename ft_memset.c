/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:14:52 by ellabiad          #+#    #+#             */
/*   Updated: 2025/03/31 14:27:43 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *p;
    p = (unsigned char *)s;
    while (n > 0)
    {
        *p = (unsigned char)c;
        p++;
        n--;
    }
    return (s);
}