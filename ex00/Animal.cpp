/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 07:07:24 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/17 07:07:25 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("undefined") {
	std::cout << "\nAnimal '" << _type << "' Default constructor called\n";
}

Animal::~Animal(void) {
	std::cout << "Animal '" << _type << "' Destructor called\n";
}

Animal::Animal(const std::string& type) : _type(type){
	std::cout << "\nAnimal '" << _type << "' String constructor called\n";
}

Animal::Animal(const Animal& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "\nAnimal '" << _type << "' Copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "\nAnimal '" << _type << "' Copy assignment operator called\n";
	return (*this);
}

const std::string&	Animal::getType() const {
	return (this->_type);
}

void Animal::makeSound(void) const{}
