/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:23:42 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/04 22:49:40 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
				FragTrap(void);
				FragTrap(std::string name);
				FragTrap(const FragTrap &other);
				~FragTrap(void);
		FragTrap &operator=(const FragTrap &other);
		void	highFivesGuys(void);
		
};

#endif