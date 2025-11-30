/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:00:46 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 20:09:41 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Check if the character is ASCII character (0-127).
 * 
 * @param c Character to check.
 * @return Non-zero if c is ASCII, zero otherwise.
*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* int main(void)
{
	printf("%d\n", ft_isascii(130));
	printf("%d\n", ft_isascii(65));

	return (0);
} */