/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:41:14 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/02 11:54:06 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *s, int c)
{
    int i;
    unsigned char needle;

    i = 0;
    needle = (unsigned char)c;
    while (s[i])
    {
        if (s[i] == needle)
            return ((char *)s + i);
        i++;
    }
    if (s[i] == needle)
        return ((char *)s + i);
    return (NULL);
}