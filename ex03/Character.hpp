/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 02:35:16 by ssghioua          #+#    #+#             */
/*   Updated: 2025/11/01 02:35:17 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# define kInventory_capacity 4

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class	Character : public ICharacter {
	public:
		Character();
		~Character();
		Character(const std::string& name);
		Character(const Character& other);

		Character&			operator=(const Character& other);
		std::string const&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
	private:
		AMateria*			_inventory[kInventory_capacity];
		std::string			_name;
		void				_character_init(const Character* other);
		void				_character_cleanUp();
};

#endif // !CHARACTER_HPP
