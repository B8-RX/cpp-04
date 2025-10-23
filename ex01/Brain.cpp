/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 02:16:46 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/22 02:16:48 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default constructor called\n";
	for (size_t i = 0; i < (sizeof(_ideas) / sizeof(_ideas[0])); i++)
		_ideas[i] = "";
}

Brain::~Brain() {
	std::cout << "\nBrain Destructor called\n";
}

Brain::Brain(const Brain& other) {
		for(int i = 0; i < iCapacity; i++)
			this->_ideas[i] = other._ideas[i];
	std::cout << "Brain Copy constructor called\n";
}

Brain&	Brain::operator=(const Brain& other) {
	if (this != &other)
		for(int i = 0; i < iCapacity; i++)
			this->_ideas[i] = other._ideas[i];
	std::cout << "Brain Copy assignment operator called\n";
	return (*this);
}

void	Brain::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < iCapacity)
		_ideas[index] = idea;
	else
		std::cout << "Cannot set the ideas! Index is out of range!\n";
}

const std::string&	Brain::getIdea(int index) const {
	static const std::string	empty = "";

	if (index >= 0 && index < iCapacity)
		return (_ideas[index]);
	else
		std::cout << "Cannot get the ideas! Index is out of range!\n";
	return (empty);
}
