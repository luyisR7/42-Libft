/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:56:39 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 15:26:58 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Converts a lowercase letter to uppercase.
 * 
 * @param c Character to convert.
 * @return The uppercase equivalent if c is lowercase, otherwise c unchaged.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/* int main(void)
{
	printf("%c\n", ft_toupper('a'));

	return (0);
} */