/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 02:00:02 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/21 02:00:03 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << this->_type << " Constructor called\n";
}

Cat::~Cat() {
	std::cout << this->_type << " Destructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << this->_type << " Copy constructor called\n";
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other)
		Animal::operator=(other);
	std::cout << this->_type << " Copy assignment operator called\n";
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << this->_type << " say: Miaou\n";
}
