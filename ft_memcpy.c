/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:58:39 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 19:38:20 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Copies n bytes from src to dst (not safe for overlapping).
 * 
 * @param dst Destination memory area.
 * @param src Source memory area.
 * @param n Number of bytes to copy.
 * @return A poiter to dst.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*cdst;
	const char	*csrc;

	if (!dst && !src)
		return (NULL);
	i = 0;
	cdst = (char *)dst;
	csrc = (const char *)src;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}

/* int main(void)
{
	int src[5] = {9,9,9,9,9};
	int dst[5];

	ft_memcpy(dst,src,sizeof(dst));

	for(int i=0;i<5;i++)
		printf("%d ", dst[i]);

	return (0);
} */