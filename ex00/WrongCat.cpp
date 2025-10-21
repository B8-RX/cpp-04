/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 03:52:33 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/21 03:52:33 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat Constructor called\n";
}

WrongCat::~WrongCat() {
	std::cout << "\nWrongCat Destructor called\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "WrongCat Copy constructor called\n";
}

WrongCat&	WrongCat::operator=(const WrongCat& other) {
	if (this != &other)
		WrongAnimal::operator=(other);
	std::cout << "WrongCat Copy assignment operator called\n";
	return (*this);
}

void	WrongCat::makeSound() const{
	std::cout << "WrongCat say: Miaou\n";
}

