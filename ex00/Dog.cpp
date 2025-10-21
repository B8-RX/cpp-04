/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 01:12:07 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/21 01:12:08 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog Constructor called\n"; 
}

Dog::~Dog() {
	std::cout << "\nDog Destructor called\n"; 
}

Dog::Dog(const Dog& other) : Animal(other) {
	if (this != &other)
		this->_type = other._type;	
	std::cout << "Dog Copy constructor called\n";
}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "Dog Copy assignment operator called\n";
	return (*this);
}

void	Dog::makeSound() {
	std::cout << "Woof\n";
}
