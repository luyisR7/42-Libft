/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:06:58 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 18:31:37 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Duplicates a string by allocating new memory for a copy.
 * 
 * @param s The string to duplicate.
 * @return A pointer to the newly allocaated copy os s, or NULL 
 * 		   if allocating fails.
 */
char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*ptr;

	dup = malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	ptr = dup;
	while (*s)
	{
		*dup++ = *s++;
	}
	*dup = '\0';
	return (ptr);
}

/* int main(void)
{
	char *str = "alo";
	char *dup = ft_strdup(str);

	printf("%s\n", dup);
	free(dup);

	return (0);
} */