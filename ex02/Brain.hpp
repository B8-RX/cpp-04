/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghioua <ssghioua@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 02:09:16 by ssghioua          #+#    #+#             */
/*   Updated: 2025/10/22 02:09:17 by ssghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

# define iCapacity 100

class Brain {
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain& other);
	
		Brain&				operator=(const Brain& other);
		void				setIdea(int index, const std::string& idea);
		const std::string&	getIdea(int index) const;
	
	private:
		std::string	_ideas[iCapacity];
};

#endif // !BRAIN_HPP
