/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:03:03 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/28 01:03:04 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "AMateria.hpp"

class	ICharacter;
class	Ice : public AMateria {
	public:
		Ice();
		~Ice();
		Ice(const std::string& type);
		Ice(const Ice& other);

		Ice&		operator=(const Ice& other);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif // !ICE_HPP
