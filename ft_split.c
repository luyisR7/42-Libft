/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:33:42 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/05 13:35:08 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wrlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	size_t	wrlcnt(const char *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static	void	ft_free(char **split, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
		free(split[i++]);
	free(split);
}

/**
 * @brief Splits a string into an array of substrings using
 * 		  a delimiter character.
 * 
 * @param s The string to split.
 * @param c The delimiter character used to separate words.
 * @return A NULL-terminated array of strings or NULL if memory
 * 		   allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	size_t	i;
	size_t	j;

	str = (char **)malloc(sizeof(char *) * (wrlcnt(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			len = wrlen(s + i, c);
			str[j] = ft_substr(s, i, len);
			if (!str[j++])
				return (ft_free(str, j), NULL);
			i += len;
		}
	}
	str[j] = NULL;
	return (str);
}

/* int main(void)
{
	int i = 0;
	char **str = ft_split("ala ele eli", ' ');

	while(str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}

	return (0);
} */