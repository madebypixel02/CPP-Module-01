/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:08:31 by aperez-b          #+#    #+#             */
/*   Updated: 2022/05/20 10:42:08 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Returns pointer to Zombie object allocated with new */
Zombie	*newZombie(std::string name);

/* Creates new Zombie stored on the heap, which announces itself */
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*z = newZombie("Alex");
	z->announce();
	randomChump("Bruno");
	delete z;
}
