/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:32:21 by bshara            #+#    #+#             */
/*   Updated: 2019/04/04 15:44:59 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (1)
	{
		if (tab[i] != 0)
		{
			if (f(tab[i]) == 1)
				count++;
			i++;
		}
		else
			break ;
	}
	return (count);
}
