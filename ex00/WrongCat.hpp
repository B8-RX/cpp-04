/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 03:52:26 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/21 03:52:27 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat& other);

		WrongCat&	operator=(const WrongCat& other);
		void	makeSound(void) const;
};

#endif // !WRONGCAT_HPP
