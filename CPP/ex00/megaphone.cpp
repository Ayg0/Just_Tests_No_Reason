/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <ted-dafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:04:36 by ted-dafi          #+#    #+#             */
/*   Updated: 2022/06/17 14:18:04 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac <= i)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				cout << (char)(av[i][j] - 32);
			else
				cout << av[i][j];
			j++;
		}
		i++;
	}
	cout << '\n';
}