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

#include<iostream>
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new Brain()) {
	std::cout << this->_type << " Default constructor called\n";
}

Cat::~Cat() {
	delete _brain;
	std::cout << this->_type << " Destructor called\n";
}

Cat::Cat(const Cat& other) : AAnimal(other), _brain(new Brain(*other._brain)) {
	std::cout << this->_type << " Copy constructor called\n";
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other)
	{
		AAnimal::operator=(other);
		*_brain = *other._brain;
	}
	std::cout << this->_type << " Copy assignment operator called\n";
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << this->_type << " say: Miaou\n";
}

void	Cat::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < 100)
		_brain->setIdea(index, idea);
	else
		std::cout << "Cannot set the ideas! Index is out of range!\n";
}

const std::string&	Cat::getIdea(int index) const {
	static const std::string	empty = "";

	if (index >= 0 && index < 100)
		return (_brain->getIdea(index));
	else
		std::cout << "Cannot get the ideas! Index is out of range!\n";
	return (empty);
}
