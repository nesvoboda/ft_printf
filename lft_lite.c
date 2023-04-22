/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lft_lite.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 17:45:28 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/25 18:03:47 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	char *start;

	start = (char *)str;
	while (*str)
		str++;
	return ((size_t)(str - start));
}

int		ft_atoi(const char *str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	while ((*str) == '\t' || (*str) == '\n' || (*str) == '\v' || (*str) == '\f'
			|| (*str) == '\r' || (*str) == ' ')
		str++;
	if ((*str) == '-' || (*str) == '+')
	{
		sign *= ((*str) == '-' ? -1 : 1);
		str++;
	}
	while ((*str) != '\0' && (*str) >= '0' && (*str) <= '9')
	{
		nbr *= 10;
		nbr += (*str) - '0';
		str++;
	}
	return (nbr * sign);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		y;
	char		*result;

	i = start;
	y = 0;
	if (s == NULL)
		return (NULL);
	if ((result = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		result[0] = '\0';
		return (result);
	}
	while (y < len && s[i] != '\0')
		result[y++] = s[i++];
	result[y] = '\0';
	return (result);
}

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)(&s[i]));
	return (NULL);
}
