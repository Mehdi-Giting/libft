/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:25:36 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/01 18:43:19 by ellabiad         ###   ########.fr       */
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
    if ()
    dest[] = '\0';
    return ();
}