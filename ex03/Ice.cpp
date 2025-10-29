/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:03:10 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/28 01:03:13 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice Default constructor called\n";
}
Ice::~Ice() {
	std::cout << "Ice Destructor called\n";
}
Ice::Ice(const std::string& type) : AMateria(type) {
	std::cout << "Ice String constructor called\n";
}
Ice::Ice(const Ice& other) : AMateria(other){
	std::cout << "Ice Copy constructor called\n";
}
Ice&	Ice::operator=(const Ice& other) {
	std::cout << "Ice Copy assignment called\n";
	AMateria::operator=(other);
	return (*this);
}
AMateria*	Ice::clone() const {
	std::cout << "Ice clone member called\n";
	return (new Ice(*this));
}
void		Ice::use(ICharacter& target) {
	std::cout << "Ice use member called\n";
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
