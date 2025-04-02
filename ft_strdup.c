/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:18:36 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/02 17:09:36 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    int i;
    char    *dest;

    i = 0;
    dest = malloc(sizeof(char) * ft_strlen(s1) + 1);
    if (!dest)
        return (NULL);
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}