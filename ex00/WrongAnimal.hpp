/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 03:52:09 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/21 03:52:10 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal(const std::string& type);
	public:
		WrongAnimal&	operator=(const WrongAnimal& other);
		const	std::string& getType(void) const;
		void	makeSound(void) const;
	protected:
		std::string	_type;
};

#endif // !WRONGANIMAL_HPP
