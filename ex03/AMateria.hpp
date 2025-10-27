/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 23:53:54 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/27 23:53:55 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
// #include "ICharacter.hpp"


class	ICharacter {
	public:
		ICharacter();
		~ICharacter();
		ICharacter(const ICharacter& other);

		ICharacter& operator=(const ICharacter& other);
};

class	Ice : public AMateria {
	public:
		Ice();
		~Ice();
		Ice(const Ice& other);

		Ice& operator=(const Ice& other);
};

class	Cure : public AMateria{
	public:
		Cure();
		~Cure();
		Cure(const Cure& other);

		Cure& operator=(const Cure& other);
};

class	AMateria {
	public:
		AMateria();
		~AMateria();
		AMateria(std::string const& type);
		AMateria(const AMateria& other);

		AMateria& operator=(const AMateria& other);
		std::string const& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string	_type;
};

#endif // !AMATERIA_HPP
