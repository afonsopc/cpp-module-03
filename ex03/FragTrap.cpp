/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:23:45 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/04 22:12:25 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "\033[93m[FragTrap] \033[0m" << this->_name << ":\033[90m I'm ALIVE!\033[0m" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "\033[93m[FragTrap] \033[0m" << this->_name << ":\033[90m It's over!\033[0m" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "\033[93m[FragTrap] \033[0m" << this->_name << " just gave a HIGH FIVE (huge)." << std::endl;
}
