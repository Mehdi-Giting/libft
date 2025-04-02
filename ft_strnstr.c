/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:48:59 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/02 13:52:41 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (!needle)
        return (haystack);
    while (haystack[i] && i < len)
    {
        while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
        {
            j++;
            if (needle[j] == '\0')
                return ((char *)haystack + i)
        }
        i++;
        j = 0;
    }
    return (NULL)
}