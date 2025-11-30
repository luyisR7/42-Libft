/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:11:57 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 19:20:24 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Fills a block of memory with a specific byte value.
 * 
 * @param b Pointer to the memory area to fill.
 * @param c The value to be set (interpreted as unsigned char).
 * @param n Number of bytes to set.
 * @return A poiter to the memory area.
 */
void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *) b;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

/* int main(void)
{
	int vetor[10];

	ft_memset(vetor, 0, sizeof(vetor));

	for(int i=0;i<10;i++)
		printf("%d ", vetor[i]);

	return (0);
} */