/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 01:08:48 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/28 01:08:48 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>

class	AMateria;

class	ICharacter {
	public:
		ICharacter();
		virtual ~ICharacter();
		ICharacter(const ICharacter& other);

		ICharacter&					operator=(const ICharacter& other);
		virtual std::string const&	getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;
};

#endif // !ICHARACTER_HPP
