/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:07:56 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 19:28:39 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Copies n bytes from src to dst, even if regions overlap.
 * 
 * @param dst Destination memory area.
 * @param src Source area.
 * @param n Number of bytes to copy.
 */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*cdst;
	const char	*csrc;

	i = 0;
	cdst = (char *)dst;
	csrc = (const char *)src;
	if (csrc < cdst)
	{
		i = n;
		while (i--)
			cdst[i] = csrc[i];
	}
	else
		ft_memcpy(cdst, csrc, n);
	return (dst);
}

/* int main(void)
{
	int src[5] = {5,5,5,5,5};
	int dst[5];

	for(int i=0;i<5;i++)
		printf("%d ", dst[i]);
	printf("\n");
	ft_memmove(dst, src, sizeof(src));

	for(int i=0;i<5;i++)
		printf("%d ", dst[i]);
	
	return (0);
} */