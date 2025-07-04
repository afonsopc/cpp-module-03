/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 22:04:10 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/04 22:34:24 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	std::cout << "=== ClapTrap Test ===" << std::endl;
	ClapTrap clap("João");
	clap.attack("target");
	clap.takeDamage(5);
	clap.beRepaired(3);
	std::cout << "\n=== ScavTrap Test ===" << std::endl;
	ScavTrap scav("Guardian");
	scav.attack("enemy");
	scav.guardGate();
	std::cout << "\n=== FragTrap Test ===" << std::endl;
	FragTrap frag("Destroyer");
	frag.attack("enemy");
	frag.highFivesGuys();
	std::cout << "\n=== DiamondTrap Test ===" << std::endl;
	DiamondTrap diamond("Ultimate");
	diamond.attack("enemy");
	diamond.whoAmI();
	diamond.guardGate();
	diamond.highFivesGuys();
	std::cout << "\n=== Tests Complete ===" << std::endl;
}
