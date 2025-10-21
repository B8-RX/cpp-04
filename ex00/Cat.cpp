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
	std::cout << "Cat Constructor called\n";
}

Cat::~Cat() {
	std::cout << "\nCat Destructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "Cat Copy constructor called\n";
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "Cat Copy assignment operator called\n";
	return (*this);
}

void	Cat::makeSound() {
	std::cout << "Miaou\n";
}
