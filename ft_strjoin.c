/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:29:57 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 18:16:06 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Concatenates two strings into a newly allocated string.
 * 
 * @param s1 The first string.
 * @param s2 The second string.
 * @return A newly allocated string containing the concatenation of s1 and s2
 * 		   or NULL if memory allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;
	char	*ptr;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	join = malloc(i + j + 1);
	if (!join)
		return (NULL);
	ptr = join;
	while (i--)
		*ptr++ = *s1++;
	while (j--)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (join);
}

/* int main(void)
{
	char *s1 = "Hey";
	char *s2 = "you";
	char *result = ft_strjoin(s1, s2);

	printf("%s\n", result);
	printf("%zu\n", ft_strlen(result));
	free(result);

	return (0);
} */