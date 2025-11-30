/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:06:41 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 18:35:37 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Locates the first ocurrence of a character in a string.
 * 
 * @param s The stringto seach in.
 * @param c The character to locate (as unsigned char).
 * @return A pointer to the first ocurrenc of c, NULL if not found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == 0)
		return ((char *)s);
	return (NULL);
}

/* int main(void)
{
	char *str = ft_strchr("aabccccfc", 'f');

	printf("%s", str);

	return (0);
} */