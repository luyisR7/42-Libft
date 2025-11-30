/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:50:43 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 18:53:17 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
/**
 * @brief Writes a string followed by a newline to the given file descriptor.
 * 
 * @param s The string to write.
 * @param fd The file descriptor to write to.
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* int main()
{
	int fd = open("saiida.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	
	ft_putendl_fd("Hello word!!", fd);
	close(fd);
} */