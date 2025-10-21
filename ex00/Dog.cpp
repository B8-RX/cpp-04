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
	std::cout << this->_type << " Constructor called\n"; 
}

Dog::~Dog() {
	std::cout << this->_type << " Destructor called\n"; 
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << this->_type << " Copy constructor called\n";
}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other)
		Animal::operator=(other);
	std::cout << this->_type << " Copy assignment operator called\n";
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << this->_type << " say: Woof\n";
}
