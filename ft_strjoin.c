/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:58:15 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/02 17:10:43 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    int i;
    int j;
    char    *cat;

    i = 0;
    j = 0;
    cat = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!cat)
        return (NULL);
    while (s1[i])
    {
        cat[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
        while (s2[i])
    {
        cat[j] = s2[i];
        i++;
        j++;
    }
    cat[j] = '\0';
    return (cat);
}
