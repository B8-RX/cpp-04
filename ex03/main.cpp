/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 23:51:56 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/27 23:51:57 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include <string>
#include <iostream>

int main(void)
{
	ICharacter* me = new Character();
	ICharacter* bob = new Character();

	AMateria* c = new Ice();
	
	bob->equip(c);
	bob->use(0, *me);
	std::cout << me->getName() << "\n";
	delete me;
	delete bob;
	return (0);
}
