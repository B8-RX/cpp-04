/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:05:59 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/28 01:06:00 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include "AMateria.hpp"

class	ICharacter;

class	Cure : public AMateria {
	public:
		Cure();
		~Cure();
		Cure(const std::string& type);
		Cure(const Cure& other);

		Cure&		operator=(const Cure& other);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif // !CURE_HPP
