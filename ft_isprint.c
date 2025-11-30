/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:06:05 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 20:05:58 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Check if the character is printable (including space).
 * 
 * @param c Character to check.
 * @return Non-zero if c is printable, zero otherwise.
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* int main(void)
{
	printf("%d\n", ft_isprint('\t'));
	printf("%d\n", ft_isprint('A'));

	return (0);
} */