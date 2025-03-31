/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:14:52 by ellabiad          #+#    #+#             */
/*   Updated: 2025/03/31 13:48:40 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *s, int c, size_t n)
{
    while (n > 0)
    {
        (unsigned char *)s = c;
        (unsigned char *)s++;
        n--;
    }
    return (s);
}