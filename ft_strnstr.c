/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:00:01 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 16:10:19 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Locates a substring within a string, limited by length.
 * 
 * @param big The main string to search in.
 * @param little The substring to find.
 * @param len Maximum number of characters to search.
 * @return A pointer to the beginning of the located substring, or
 * 		   NULL if not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *) big + i);
		}
		i++;
	}
	return (NULL);
}

/* int main()
{
	printf("%s\n", ft_strnstr("ananas", "as", 6));
	printf("%s\n", ft_strnstr("bHello word!", "bHe", 4));
	printf("%s\n", ft_strnstr("huntedhuse", "ted", 10));
	printf("%s\n", ft_strnstr("bvbvbvbvbvbvoizzzz", "\0", 14));

	return (0);
} */