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
#include "Cure.hpp"
#include "Ice.hpp"
#include <string>
#include <iostream>

int main(void)
{
	AMateria* pAm1;
	Cure c1;
	pAm1 = &c1;
	AMateria* pAm2;
	Cure c2;
	pAm2 = &c2;
	Ice*		i1 = new Ice();

	std::cout << "pAm1 type is " << pAm1->getType() << "\n";
	
	std::cout << "pAm2 type is " << pAm2->getType() << "\n";
	
	std::cout << "i1 type is " << i1->getType() << "\n";
	delete i1;
	return (0);
}
