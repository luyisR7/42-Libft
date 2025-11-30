/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:08:55 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 17:42:33 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Calculates the length of a null-terminated string.
 * 
 * @param s Pointer to the string.
 * @return The number of characters in the string, excluding the null terminator.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* int main(void)
{
	printf("Expect: [6]\ngot   : [%lu]\n", ft_strlen("Hello!"));
} */