/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:16:59 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 19:58:18 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Seaches for a specific byte in a memory block.
 * 
 * @param s Pointer to the memory area.
 * @param c The byte value to search for (interpreted as unsigned char).
 * @param n Number of bytes to seach.
 * @return A poiter to the first occurrance c, NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

/* int main(void)
{
	int vetor[5] = {1,2,3,4,5};
	int *ptr = (int *)ft_memchr(vetor, 3, sizeof(vetor));

	for(int *i=ptr;i<vetor + 5;i++)
		printf("%d ", *i);
	
	return (0);
} */