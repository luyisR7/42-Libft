/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:37:08 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 17:20:40 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Compares up to n characters of two strings.
 * 
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if s1 is found
 * 		   to be less than, to match, or be greater than s2, respectively.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/* int main(void)
{
	printf("Test 1: expect [32] got [%d]\n", ft_strncmp("hello", "hellO", 5));
	printf("Test 2: expect [-32] got [%d]\n", ft_strncmp("HellO", "Hello", 5));
	printf("Test 3: expect [0] got [%d]\n", ft_strncmp("abcd", "abcd", 4));

	return (0);
} */