/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 07:05:55 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/17 07:05:56 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* animal = new Animal();
		const Animal* leChien = new Dog();
		const Animal* leChat = new Cat();
		std::cout << "\n";
		std::cout << "leChien->getType() = " << leChien->getType() << " " << std::endl;
		std::cout << "leChat->getType() = " <<  leChat->getType() << " " << std::endl;
		std::cout << "\n";
		leChat->makeSound();
		leChien->makeSound();
		animal->makeSound();
		std::cout << "\n";
		delete leChat;
		delete leChien;
		delete animal;
	}	
	std::cout << "\n\n\t~~~~~~~~~~~~~ WRONG TEST ~~~~~~~~~~~~~\n\n";
	{
		const WrongAnimal* badAnimal = new WrongAnimal();
		const WrongAnimal* badCat = new WrongCat();
		std::cout << "\n";
		std::cout << "badCat->getType() = " << badCat->getType() << " " << std::endl;
		badCat->makeSound(); //will output the wrong animal sound!
		badAnimal->makeSound();
		std::cout << "\n";
		delete badCat;
		delete badAnimal;
	}
	return (0);
}
