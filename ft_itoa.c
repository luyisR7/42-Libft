/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:23:25 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/05 11:00:30 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Calculats the length of an integer (like a string).
 * 
 * @param n Integer whos length will be calculated.
 * @return The legth of n.
 */
static	int	ft_len(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

/**
 * @brief Converts an integer to a newly allocated string.
 * 
 * @param n The integer to convert.
 * @return A pointer to the newly allocated string, NULL if  allocation fails.
 */
char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = ft_len(nb);
	str = malloc((len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = ((nb % 10) + '0');
		nb = nb / 10;
	}
	if (n == 0)
		str[0] = '0';
	return (str);
}

/* int main(void)
{
	char *a = ft_itoa(12345);
	char *b = ft_itoa(-12345);

	printf("%s\n", a);
	printf("%s\n", b);

	free(a);
	free(b);

	return (0);
} */