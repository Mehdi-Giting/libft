/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:52:48 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/01 12:21:21 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlcpy(char *dest, const char *src, size_t size);
{
    size_t  i;

    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    if (size == 1)
    {
        dest[0] = '\0';
        return (ft_strlen(src));
    }
    while (i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}