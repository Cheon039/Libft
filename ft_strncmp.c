/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 10:59:12 by daelee            #+#    #+#             */
/*   Updated: 2020/02/29 11:15:58 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    if (n == 0)
        return (0);
    i = 0;
    while ((s1[i] != '\0') && (s2[i] != '\0') && i < (n - 1))
    {
        printf("%ld...%ld\n", n, i);
        if (s1[i] != s2[i])
            break ; 
        i++;
    }
    return (s1[i] - s2[i]);
}

int     main()
{
    char str1[] = "abcdaaa";
    char str2[] = "abcdaazz";
    printf("real...%d\n", strncmp(str1, str2, 6));
    printf("myft...%d\n", ft_strncmp(str1, str2, 6));
    return 0;
}