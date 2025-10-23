/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 07:07:24 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/23 04:18:10 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("undefined") {
	std::cout << "\nAAnimal '" << _type << "' Default constructor called\n";
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal '" << _type << "' Destructor called\n";
}

AAnimal::AAnimal(const std::string& type) : _type(type){
	std::cout << "\nAAnimal '" << _type << "' String constructor called\n";
}

AAnimal::AAnimal(const AAnimal& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "\nAAnimal '" << _type << "' Copy constructor called\n";
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "\nAAnimal '" << _type << "' Copy assignment operator called\n";
	return (*this);
}

const std::string&	AAnimal::getType() const {
	return (this->_type);
}
