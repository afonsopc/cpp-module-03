/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:23:45 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/04 22:49:40 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "\033[93m[ScavTrap] \033[0m" << this->_name << ":\033[90m Default ScavTrap created!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "\033[93m[ScavTrap] \033[0m" << this->_name << ":\033[90m I'm ALIVE!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
	this->_health = other._health;
	this->_energy = other._energy;
	this->_damage = other._damage;
	std::cout << "\033[93m[ScavTrap] \033[0m" << this->_name << ":\033[90m Copy ScavTrap created!\033[0m" << std::endl;
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

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		this->_health = other._health;
		this->_energy = other._energy;
		this->_damage = other._damage;
	}
	std::cout << "\033[93m[ScavTrap] \033[0m" << this->_name << ":\033[90m Assignment operator called!\033[0m" << std::endl;
	return *this;
}
