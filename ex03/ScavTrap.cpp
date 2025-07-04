/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:23:45 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/04 22:08:12 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "\033[93m[ScavTrap] \033[0m" << this->_name << ":\033[90m I'm ALIVE!\033[0m" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "\033[93m[ScavTrap] \033[0m" << this->_name << ":\033[90m It's over!\033[0m" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	std::cout << "\033[93m[ScavTrap] \033[0m";
	ClapTrap::attack(target);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
