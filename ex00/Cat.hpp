/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 01:59:51 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/21 01:59:53 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat : public Animal {
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat& other);

		Cat&	operator=(const Cat& other);
		void	makeSound(void) const;
};

#endif // !CAT_HPP
