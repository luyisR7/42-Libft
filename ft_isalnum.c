/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:55:17 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 20:12:51 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Check if a character is alphanumeric.
 * 
 * @param c The character to check.
 * @return Non-zero if c is alphanumeric, zero otherwise.
*/
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/* int main(void)
{
	printf("%d\n", ft_isalnum('7'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('a'));

	return (0);
} */