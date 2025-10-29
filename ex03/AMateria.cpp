/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:01:04 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/28 01:01:06 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

AMateria::AMateria() {
	std::cout << "AMateria Default constructor called\n";
}
AMateria::~AMateria() {
	std::cout << "AMateria Destructor called\n";
}
AMateria::AMateria(std::string const& type) {
	this->_type = type;
	std::cout << "AMateria String constructor called\n";
}
AMateria::AMateria(const AMateria& other) {
	this->_type = other._type;
	std::cout << "AMateria Copy constructor called\n";
}
AMateria& AMateria::operator=(const AMateria&) {
	std::cout << "AMateria Copy assignment operator called\n";
	return (*this);
}
std::string const& AMateria::getType() const {
	return (this->_type);
}
void	AMateria::use(ICharacter& target) {
	std::cout << "AMateria use member called\n";
	std::cout << "target: " << target.getName() << "\n";
}
