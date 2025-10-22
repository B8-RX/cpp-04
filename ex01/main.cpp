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

int main()
{
	{
		const Animal*	arr[50];
		size_t	total = 4;

		for (size_t i = 0; i < total; i++)
		{
			if (i < (total / 2))
				arr[i] = new Dog();
			else
				arr[i] = new Cat();
		}
		std::cout << "\nTEST DEEP COPIES...\n\n";
		Dog leChien;
		Dog leChienCopy;

		leChien.setIdea(0, "ball");
		leChien.setIdea(1, "chicken");
		
		leChienCopy = leChien;
		
		leChien.setIdea(1, "fish");
	
		std::cout << "\nshoud be ball: " << leChienCopy.getIdea(0) << "\n";
		std::cout << "should be chicken: " << leChienCopy.getIdea(1) << "\n";
		std::cout << "should be ball: " << leChien.getIdea(0) << "\n";
		std::cout << "should be fish: " << leChien.getIdea(1) << "\n";
		

		std::cout << "\nDESTRUCTION...\n\n";
		for (size_t i = 0; i < total; i++)
			delete arr[i];
	}
	return (0);
}
