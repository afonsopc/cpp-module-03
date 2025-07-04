/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 22:04:05 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/21 23:20:37 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("MissingNa"), _health(10), _energy(10), _damage(0) {
	std::cout << "\033[93m[ClapTrap] \033[0m" << this->_name << ":\033[90m I'm SO default AND ALIVE RIGHT NOW!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap_trap) {
	std::cout << "\033[93m[ClapTrap]\033[0m:\033[90m I'm about to be copied RIGHT NOW!\033[0m" << std::endl;
	*this = clap_trap;
}

ClapTrap::ClapTrap(std::string name): _name(name), _health(10), _energy(10), _damage(0) {
	std::cout << "\033[93m[ClapTrap] \033[0m" << this->_name << ":\033[90m I'm ALIVE!\033[0m" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "\033[93m[ClapTrap] \033[0m" << this->_name << ":\033[90m It's over!\033[0m" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clap_trap) {
	this->_name = clap_trap._name;
	this->_health = clap_trap._health;
	this->_energy = clap_trap._energy;
	this->_damage = clap_trap._damage;
	std::cout << "\033[93m[ClapTrap] \033[0m" << this->_name << ":\033[90m I AM cloned AND ALIVE!\033[0m" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (!this->_energy)
	{
		std::cout << this->_name << " doesn't have enough energy to attack " << target << "!" << std::endl;
		return ;
	}
	else if (!this->_health)
	{
		std::cout << this->_name << " can't attack because he is dead!" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	--this->_energy;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!this->_health)
	{
		std::cout << this->_name << " is already dead!" << std::endl;
		return ;
	}
	if (amount > this->_health)
		amount = this->_health;
	this->_health -= amount;
	std::cout << this->_name << " took " << amount << " damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_energy)
	{
		std::cout << this->_name << " doesn't have enough energy to be repaired!" << std::endl;
		return ;
	}
	this->_health += amount;
	--this->_energy;
	std::cout << this->_name << " has been repaired! (+" << amount << " health)" << std::endl;
}
