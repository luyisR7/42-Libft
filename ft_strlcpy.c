/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:14:49 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 18:07:28 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Copies a string from src to dst with size limitation.
 * 
 * @param dst Desination buffer.
 * @param src Source string.
 * @param size Maximum size of the destination buffer.
 * @return The total length of the string it tried to create (length of src).
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}

/* int main(void)
{
	char *src = "hello world!";
	char dst[13];

	ft_strlcpy(dst, src, 13);
	printf("%s\n", dst);

	return (0);
} */