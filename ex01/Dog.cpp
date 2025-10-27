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

#include<iostream>
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain()) {
	std::cout << this->_type << " Default constructor called\n"; 
}

Dog::~Dog() {
	delete _brain;
	std::cout << this->_type << " Destructor called\n"; 
}

Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain(*other._brain)) {
	std::cout << this->_type << " Copy constructor called\n";
}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	std::cout << this->_type << " Copy assignment operator called\n";
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << this->_type << " say: Woof\n";
}

void	Dog::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < 100)
		_brain->setIdea(index, idea);
	else
		std::cout << "Cannot set the ideas! Index is out of range!\n";
}

const std::string&	Dog::getIdea(int index) const {
	static const std::string	empty = "";

	if (index >= 0 && index < 100)
		return (_brain->getIdea(index));
	else
		std::cout << "Cannot get the ideas! Index is out of range!\n";
	return (empty);
}
