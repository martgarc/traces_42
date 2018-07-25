/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:52:28 by martgarc          #+#    #+#             */
/*   Updated: 2018/07/12 12:24:14 by martgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while ((i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			return (0);
		i++;
	}
	return (0);
}
