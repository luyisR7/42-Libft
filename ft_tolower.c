/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:59:23 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 15:27:31 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Converts an uppercase letter to lowecase.
 * 
 * @param c Character to convert.
 * @return The lowercase equivalent if c is uppercase, otherwise c unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* int main(void)
{
	printf("%c\n", ft_tolower('A'));

	return (0);
} */