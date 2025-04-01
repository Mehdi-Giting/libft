/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:25:36 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/01 17:56:59 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  dest_index;
    size_t  src_index;
    size_t  len_dest;

    dest_index = ft_strlen(dest);
    dest_len = ft_strlen(dest);
    src_index = 0;
    if (size <= dest_index)
        return (ft_strlen(src) + size);
    while (dest_index < size - 1 && src[src_index] != '\0')
    {
        dest[dest_index] = src[src_index];
        dest_index++;
        src_index++;
    }
    dest[dest_index] = '\0';
    return (ft_strlen(src) + dest_index);
}