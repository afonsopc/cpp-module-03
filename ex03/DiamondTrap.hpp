/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:23:42 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/04 22:49:40 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string	_name;
	public:
				DiamondTrap(void);
				DiamondTrap(std::string name);
				DiamondTrap(const DiamondTrap &other);
				~DiamondTrap(void);
		DiamondTrap &operator=(const DiamondTrap &other);
		void	attack(const std::string &target);
		void	whoAmI(void);
};

#endif