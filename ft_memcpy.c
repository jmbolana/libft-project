/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jmbolana <jmbolana@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:20:54 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/14 08:39:39 by Jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*char_dest;
	unsigned char	*char_src;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	char_dest = (unsigned char *)dest;
	char_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char *source = NULL;
// 	char *dest = NULL;
// 	printf("%lu\n", sizeof(dest));
// 	ft_memcpy(dest, source, sizeof(source) + 1);
// 	printf("%p\n", dest);
// 	return (0);
// }
