/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 03:52:17 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/21 03:52:18 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("undefined") {
	std::cout << "\nWrongAnimal '" << _type << "' Default constructor called\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "\nWrongAnimal '" << _type << "' Destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type) {
	std::cout << "\nWrongAnimal '" << _type << "' Copy constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type) {
	std::cout << "\nWrongAnimal '" << _type << "' String constructor called\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "\nWrongAnimal '" << _type << "' Copy assignment operator called\n";
	return (*this);
}

const std::string& WrongAnimal::getType() const{
	return (this->_type);
}

void	WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal say: kssksskssskrrkrkrkrkrk\n";
}
