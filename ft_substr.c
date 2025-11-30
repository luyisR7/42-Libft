/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:09:23 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 15:57:41 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Create a substring started by the index 'start'.
 * 
 * @param s String to be used.
 * @param start Index where the substring starts.
 * @param len Length the substring should have.
 * @return The substring with a '\0' in the end.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*ptr;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
	{
		len = slen - start;
	}
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	ptr = sub;
	s += start;
	while (len--)
	{
		*sub++ = *s++;
	}
	*sub = '\0';
	return (ptr);
}

/* int main(void)
{
	char *str1 = ft_substr("abcdefgh", 5, 3);
	char *str2 = ft_substr("eu gosto de abacaxi", 9, 40);
	char *str3 = ft_substr("eu gosto de abacaxi", 0, 1);

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);

	free(str1);
	free(str2);
	free(str3);

	return (0);
} */