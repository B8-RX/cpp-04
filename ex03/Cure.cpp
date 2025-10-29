/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:06:08 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/28 01:06:09 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure Default constructor called\n";
}
Cure::~Cure() {
	std::cout << "Cure Destructor called\n";
}
Cure::Cure(const std::string& type) : AMateria(type) {
	std::cout << "Cure String constructor called\n";
}
Cure::Cure(const Cure& other) : AMateria(other) {
	std::cout << "Cure Copy constructor called\n";
}
Cure&	Cure::operator=(const Cure& other) {
	std::cout << "Cure Copy assignment called\n";
	AMateria::operator=(other);
	return (*this);
}
AMateria*	Cure::clone() const {
	std::cout << "Cure clone member called\n";
	return (new Cure(*this));
}
void		Cure::use(ICharacter& target) {
	std::cout << "Cure use member called\n";
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
