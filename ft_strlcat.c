/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:21:08 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 18:10:27 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Concatenates src to dst ensuring null termination and size safety.
 * 
 * @param dst Destination buffer (must be null-terminated).
 * @param src Source string to append.
 * @param size Total size of the destination buffer.
 * @return The total length of the string it tried to create (dst + src length).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = 0;
	while (dlen < size && dst[dlen])
		dlen++;
	if (size <= dlen)
		return (slen + dlen);
	i = 0;
	while (src[i] && (dlen + i + 1) < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dst[dlen + i] = '\0';
	return (dlen + slen);
}

/* int main(void)
{
	char dst[13] = "Hello ";
	char *src = "World!";

	ft_strlcat(dst, src, 13);
	printf("%s\n", dst);
	return (0);
} */