/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:52:38 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 20:07:42 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Check if character is a decimal digit (0-9).
 * 
 * @param c Character to check.
 * @return Non-zero if c is digit, zero otherwise.
*/
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/* int main(void)
{
	printf("%d\n", ft_isdigit('7'));
	printf("%d\n", ft_isdigit('A'));

	return (0);
} */