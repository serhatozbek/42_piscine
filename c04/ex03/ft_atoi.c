/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 01:53:04 by sozbek            #+#    #+#             */
/*   Updated: 2024/02/06 17:38:54 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	pn;
	int	ret;

	i = 0;
	pn = 1;
	ret = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pn = -pn;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = (str[i] - '0') + (ret * 10);
		i++;
	}
	return (ret * pn);
}
