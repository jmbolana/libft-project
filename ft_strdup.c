/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jmbolana <jmbolana@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 09:36:45 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/14 08:52:20 by Jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*n;
	int		i;
	size_t	size;

	size = ft_strlen(s);
	n = malloc(sizeof(char) * (size + 1));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		n[i] = s[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
