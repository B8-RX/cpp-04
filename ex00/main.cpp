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

void	test_name(const std::string& name,const std::string& description) {
	std::cout << "\n============== TEST: " << name << " ==============\n";
	std::cout << description << "\n\n";
}

int	main(void) {

	test_name("Create Animal", "Should create an Animal on the heap and display the default constructor log\n");
	
	Animal *meta = new Animal();
	// Animal *dog = new Dog();

	test_name("Make sound", "Should make WRONGRRR sound");
	meta->makeSound();
	

	delete meta;

	return (0);
}
