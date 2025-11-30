/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:45:54 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 20:10:52 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Check if a character is alphabetic (A-Z, a-z).
 * 
 * @param c Caracter to check.
 * @return Non-zero if c is alphabetic, zero otherwise.
*/
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/* int main(void)
{
	printf("%d\n", ft_isalpha('7'));
	printf("%d\n", ft_isalpha('A'));

	return (0);
} */