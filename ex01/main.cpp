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

int main(void)
{
	{
		std::cout << "\n\tTEST MEMORY LEAKS...\n\n";
		size_t	total = 4;
		const Animal*	arr[total];

		for (size_t i = 0; i < total; i++)
		{
			if (i < (total / 2))
				arr[i] = new Dog();
			else
				arr[i] = new Cat();
		}
		std::cout << "\n\tDESTRUCTION...\n\n";
		for (size_t i = 0; i < total; i++)
			delete arr[i];
	}
	{
		std::cout << "\n\tTEST DEEP COPIES...\n\n";
		Dog leChien;
		Dog leChienCopy;

		leChien.setIdea(0, "ball");
		
		std::cout << "\n\tASSIGNMENT (deep copy)...\n";
		leChienCopy = leChien;
		
		std::cout << "\nleChien idea[0] => " << leChien.getIdea(0) << "\n";
		std::cout << "leChienCopy idea[0] => " << leChienCopy.getIdea(0) << "\n";
		
		std::cout << "\n\tMODIFICATION OF 'leChien' IDEA[0] ...\n";
		leChien.setIdea(0, "frisbee");
	
		std::cout << "\nleChien idea[0] => " << leChien.getIdea(0) << "\n";
		std::cout << "leChienCopy idea[0] => " << leChienCopy.getIdea(0) << "\n\n";
		
		std::cout << "\n\tDESTRUCTION...\n\n";
	}
	return (0);
}
