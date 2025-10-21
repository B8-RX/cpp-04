/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 07:07:13 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/17 07:07:14 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const std::string& type);
		Animal(const Animal& other);
	public:
		Animal&				operator=(const Animal& other);
		virtual void		makeSound(void) const;
		const std::string&	getType() const;
	protected:
		std::string			_type;
};

#endif // !ANIMAL_HPP
