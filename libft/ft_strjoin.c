/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:01:45 by mmthethw          #+#    #+#             */
/*   Updated: 2017/06/10 08:52:16 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*fresh;
	int			i;
	int			j;
	int			len;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	fresh = (char *)malloc(sizeof(char) * len + 1);
	if (fresh == NULL)
		return (NULL);
	while (s1[i])
		fresh[j++] = s1[i++];
	i = 0;
	while (s2[i])
		fresh[j++] = s2[i++];
	fresh[j] = '\0';
	return (fresh);
}
