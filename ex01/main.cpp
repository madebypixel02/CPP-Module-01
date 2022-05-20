/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:59:38 by aperez-b          #+#    #+#             */
/*   Updated: 2022/05/20 11:11:54 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Creates horde of zombies named 'name' */
Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	size;

	size = 20;
	Zombie *horde = zombieHorde(size, "Zom");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
}
