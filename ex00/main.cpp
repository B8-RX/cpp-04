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

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	test_name(const std::string& name, const std::string& description) {
	std::cout << "\n\t~~~~~~~~~~~~~~~~~~~~~~~~~ TEST: [" << name << "] ~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\t" << description << "\n\n";
}

int	main(void) {

	Animal *meta = new Animal();
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	test_name("Make sound", "Should display nothing when calling the member makesoung() of the class meta");
	meta->makeSound();

	test_name("Make sound", "Should display 'Woof' sound when calling the member makesoung() of the class dog");
	dog->makeSound();	
	
	test_name("Make sound", "Should display 'Miaou' sound when calling the member makesoung() of the class cat");
	cat->makeSound();	

	test_name("Get type", "Should display 'Dog' when calling the getType() member of the class dog");
	std::cout << "\ndog->getType() = " << dog->getType() << " " << std::endl;
	
	test_name("Get type", "Should display 'Cat' when calling the getType() member of the class cat");
	std::cout << "\ncat->getType() = " << cat->getType() << " " << std::endl;

	std::cout << "\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	delete meta;
	delete dog;
	delete cat;

	return (0);
}
