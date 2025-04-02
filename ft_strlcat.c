/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:25:36 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/02 11:32:15 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  src_len;
    size_t  dest_len;

    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);
    if (dest_len >= size)
        return (src_len + dest_len);
    if (src_len < size - dest_len)
        ft_memcpy(dest + dest_len, src, src_len + 1);
    else
    {
        ft_memcpy(dest + dest_len, src, size - dest_len - 1)
        dest[size - 1] = '\0';
    }
    return ();
}