/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:26:34 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 19:50:01 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Compares two memory blocks byte by byte.
 * 
 * @param s1 Pointer to the first memory block.
 * @param s2 Pointer to the second memory block.
 * @param n Number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if s1 is found
 *         to be less than, to match, or be greater than s2, respectively.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (p1[i] == p2[i] && i < n - 1)
		i++;
	return (p1[i] - p2[i]);
}

/* int main(void)
{
	int v1[5] = {1,2,3,4,5};
	int v2[5] = {1,2,3,4,5};

	printf("Test 1: expect [0] got [%d]\n", ft_memcmp(v1,v2, sizeof(v2)));
	printf("Test 2: expect [-32] got [%d]\n", ft_memcmp("HellO", "Hello", 5));

	return (0);
} */