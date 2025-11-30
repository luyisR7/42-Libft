/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:08:24 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 20:19:36 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Sets all bytes in a block of memory to zero.
 * 
 * @param s Pointer to a memory area.
 * @param n Number of bytes to set to zero.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* int main(void)
{
	int vetor[10] = {22,22,22,22,22,22,22,22,22,22};

	for(int i=0;i<10;i++)
		printf("%d ", vetor[i]);

	ft_bzero(vetor, sizeof(vetor));
	printf("\n");

	for(int i=0;i<10;i++)
		printf("%d ", vetor[i]);
	
	return (0);
} */