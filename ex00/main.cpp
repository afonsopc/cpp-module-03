/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 22:04:10 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/21 23:00:09 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	std::cout << "\n--- Test 1: Basic functionality ---" << std::endl;
	ClapTrap clap1("João");
	ClapTrap clap2("Carlos");
	
	clap1.attack("Carlos");
	clap2.takeDamage(5);
	clap2.beRepaired(3);
	
	std::cout << "\n--- Test 2: Energy depletion ---" << std::endl;
	ClapTrap clap3("Manuel");
	for (int i = 0; i < 12; i++) {
		std::cout << "Attack attempt " << i+1 << ": ";
		clap3.attack("Pedro");
	}

	std::cout << "\n--- Test 3: Death scenario ---" << std::endl;
	ClapTrap clap4("Luiz");
	clap4.takeDamage(5);
	clap4.beRepaired(2);
	clap4.takeDamage(7);  // Should bring health to 0
	clap4.attack("Sancho");  // Shouldn't work - no health
	clap4.beRepaired(5);  // Shouldn't work - no health
	
	std::cout << "\n--- Test 4: Copy constructor ---" << std::endl;
	ClapTrap original("Afonso");
	original.attack("Duarte");
	ClapTrap copy(original);
	copy.attack("Dinis");
	
	std::cout << "\n--- Test 5: Assignment operator ---" << std::endl;
	ClapTrap assigned = original;
	assigned.attack("Nuno");
}
