/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:38:13 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 20:16:16 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Allocate and clear a block of memory.
 * 
 * @param nmemb Number of elements to allocate.
 * @param size Size of each element in bytes.
 * @return A pointer to the allocate memory, or NULL if allocats fails.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buff;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	buff = malloc(nmemb * size);
	if (!buff)
		return (NULL);
	ft_bzero(buff, nmemb * size);
	return (buff);
}

/* int main(void)
{
	int *vetor = ft_calloc(10, 4);

	for(int i=0;i<10;i++)
		printf("%d ", vetor[i]);
	
	free(vetor);
	return(0);
} */