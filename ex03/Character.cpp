/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:08:58 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/28 01:08:58 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>

Character::Character() : _name("unknow") {
	std::cout << "Character Default constructor called\n";
	this->_character_init(NULL);
}

Character::~Character() {
	std::cout << "Character Destructor called\n";
	this->_character_cleanUp();
}

Character::Character(const std::string& name) : _name(name) {
	std::cout << "Character Name constructor called\n";
	this->_character_init(NULL);
}

Character::Character(const Character& other) {
	std::cout << "Character Copy constructor called\n";
	this->_character_init(&other);
	this->_name = other._name;
}

Character&	Character::operator=(const Character& other) {
	std::cout << "Character Copy assignment operator called\n";
	if (this != &other)
	{
		this->_character_cleanUp();
		this->_character_init(&other);
		this->_name = other._name;
	}
	return (*this);
}

const std::string&	Character::getName() const {
	return (this->_name);
} 

void	Character::equip(AMateria* m) {
	std::cout << "Character equip member called\n";
	int i = -1;
	while (++i < kInventory_capacity)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break;
		}
	}
	if (i == kInventory_capacity)
		std::cout << "Character cant equip Materia. Inventory is full\n";
}

void	Character::unequip(int idx) {
	std::cout << "Character unequip member called\n";
	if (idx >= 0 && idx < kInventory_capacity && this->_inventory[idx] != NULL)
			this->_inventory[idx] = NULL;
	else
		std::cout << "Character cant unequip Materia. Invalid index\n";
}

void	Character::use(int idx, ICharacter &target) {
	std::cout << "Character use member called\n";
	if (idx >= 0 && idx < kInventory_capacity && this->_inventory[idx] != NULL)
			this->_inventory[idx]->use(target);
	else
		std::cout << "Character cant use Materia. Invalid index\n";
}

void	Character::_character_init(const Character* src) {
	if (src == NULL)
		for (int i = 0; i < kInventory_capacity; i++)
			this->_inventory[i] = NULL;
	else
		for (int i = 0; i < kInventory_capacity; i++)
			this->_inventory[i] = src->_inventory[i]->clone();
}

void	Character::_character_cleanUp() {
	for (int i = 0; i < kInventory_capacity; i++)
		delete this->_inventory[i];
}
