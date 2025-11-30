/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:02:21 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/02 18:29:12 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Applies the 'f' to each character of the string 's'.
 * 
 * @param s The function to be used.
 * @param f The function to be applied in each character.
 * @return The result of the successive applications of the 'f' function.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	to_lower(unsigned int i, char *c)
{
	(void)i;
	*c = (char)ft_tolower((unsigned char)*c);
}

int main(void)
{
	char str[] = "HeLlo WoRlD!";
	
	ft_striteri(str, to_lower);

	printf("%s\n", str);

	return (0);
} */