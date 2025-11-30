/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:03:40 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 15:26:06 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Erases the 'set' characters from the start and the end of the string.
 * 
 * @param s1 string to be trimmed.
 * @param set Characters to erase.
 * @return A string result of the trim.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	if (!set)
		return ((char *)s1);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	str = ft_substr(s1, i, (j - i + 1));
	return (str);
}

/* int main()
{
	char str[] = "zhgLuiszgh";
	char *trim = ft_strtrim(str, "zhg");

	printf("%s\n", trim);
	free(trim);

	return (0);
} */