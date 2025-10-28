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

class	ICharacter;

class	AMateria {
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const& type);
		AMateria(const AMateria& other);

		AMateria&			operator=(const AMateria& other);
		std::string const&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string	_type;
};

#endif // !AMATERIA_HPP
