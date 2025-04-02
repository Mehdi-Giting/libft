/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellabiad <ellabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:53:43 by ellabiad          #+#    #+#             */
/*   Updated: 2025/04/02 14:10:44 by ellabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isspace(int c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0)
}

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;

    i = 0
    sign = 1;
    res = 0;
    while (ft_isspace(str[i]) == 1)
        i++;
    if (str[i] == '+' || str[i + 1] =='-')
    {
        if (str[i + 1] =='-')
            sign = -1
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0')
        i++;
    }
    return (res * sign);
}