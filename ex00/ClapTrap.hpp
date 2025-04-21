/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 22:04:08 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/21 22:51:43 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:
		std::string	_name;
		unsigned	_health;
		unsigned	_energy;
		unsigned	_damage;
	public:
					ClapTrap(void);
					ClapTrap(const ClapTrap &clap_trap);
					ClapTrap(std::string name);
					~ClapTrap(void);
		ClapTrap	&operator=(const ClapTrap &clap_trap);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif