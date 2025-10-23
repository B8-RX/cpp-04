/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 07:07:13 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/23 04:17:49 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>

class AAnimal {
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal(const std::string& type);
		AAnimal(const AAnimal& other);

		AAnimal&			operator=(const AAnimal& other);
		virtual void		makeSound(void) const = 0;
		const std::string&	getType() const;

	protected:
		std::string			_type;
};

#endif // !AANIMAL_HPP
