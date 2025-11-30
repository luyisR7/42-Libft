/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:50:31 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 15:48:50 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Locates the last occurrence of a character in a string.
 * 
 * @param s The string to search in.
 * @param c The character to locate (interpreted as unsigned char).
 * @return A pointer to the last occurrence of c, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/* int main(void)
{
	char *str = ft_strrchr("aaaazbbbb", '\0');
	printf("%s\n", str);

	return (0);
} */