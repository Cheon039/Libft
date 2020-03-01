/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 19:25:40 by daelee            #+#    #+#             */
/*   Updated: 2020/03/01 19:27:52 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isupper(int c)
{
    return((65 <= c) && (90 >= c));
}

int	    ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

int     main()
{
    printf("%c\n", ft_tolower('r'));
    return (0);
}