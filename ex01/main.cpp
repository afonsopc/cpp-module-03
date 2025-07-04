/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 22:04:10 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/04 22:15:48 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	std::cout << "\n=== CLAPTRAP TESTS ===" << std::endl;
	std::cout << "\n--- Test 1: Basic ClapTrap functionality ---" << std::endl;
	ClapTrap clap1("João");
	ClapTrap clap2("Carlos");
	clap1.attack("Carlos");
	clap2.takeDamage(5);
	clap2.beRepaired(3);
	std::cout << "\n--- Test 2: ClapTrap Energy depletion ---" << std::endl;
	ClapTrap clap3("Manuel");
	for (int i = 0; i < 12; i++) {
		std::cout << "Attack attempt " << i+1 << ": ";
		clap3.attack("Pedro");
	}
	std::cout << "\n=== SCAVTRAP TESTS ===" << std::endl;
	std::cout << "\n--- Test 3: ScavTrap Construction/Destruction Chain ---" << std::endl;
	{
		std::cout << "Creating ScavTrap..." << std::endl;
		ScavTrap scav1("Warrior");
		std::cout << "ScavTrap created! Now destroying..." << std::endl;
	}
	std::cout << "ScavTrap destroyed!" << std::endl;
	std::cout << "\n--- Test 4: ScavTrap Basic Combat ---" << std::endl;
	ScavTrap scav2("Guardian");
	ScavTrap scav3("Defender");
	scav2.attack("Defender");
	scav3.takeDamage(20);
	scav3.beRepaired(10);
	std::cout << "\n--- Test 5: ScavTrap vs ClapTrap Combat ---" << std::endl;
	ScavTrap scav4("BigGuy");
	ClapTrap clap4("SmallGuy");
	std::cout << "ScavTrap attacks ClapTrap:" << std::endl;
	scav4.attack("SmallGuy");
	clap4.takeDamage(20);
	std::cout << "ClapTrap tries to fight back:" << std::endl;
	clap4.attack("BigGuy");
	std::cout << "\n--- Test 6: ScavTrap Special Ability ---" << std::endl;
	ScavTrap scav5("Gatekeeper");
	scav5.guardGate();
	scav5.attack("Intruder");
	scav5.guardGate();
	std::cout << "\n--- Test 7: ScavTrap Energy Management ---" << std::endl;
	ScavTrap scav6("Energetic");
	std::cout << "ScavTrap has 50 energy points. Testing attacks:" << std::endl;
	for (int i = 0; i < 52; i++) {
		if (i == 49) std::cout << "Should have 1 energy left..." << std::endl;
		if (i == 50) std::cout << "Should be out of energy now..." << std::endl;
		scav6.attack("Target");
	}
	std::cout << "\n--- Test 8: ScavTrap Durability Test ---" << std::endl;
	ScavTrap scav7("Tank");
	std::cout << "ScavTrap has 100 HP. Testing damage:" << std::endl;
	scav7.takeDamage(30);
	scav7.beRepaired(20);
	scav7.takeDamage(50);
	scav7.takeDamage(60);
	scav7.attack("DeadTarget");
	scav7.guardGate();
	std::cout << "\n--- Test 9: Multiple ScavTraps ---" << std::endl;
	ScavTrap army[3] = {ScavTrap("Alpha"), ScavTrap("Beta"), ScavTrap("Gamma")};
	for (int i = 0; i < 3; i++) {
		army[i].guardGate();
		army[i].attack("Enemy");
	}
	std::cout << "\n--- Test 10: ScavTrap Inheritance Verification ---" << std::endl;
	ScavTrap* scav_ptr = new ScavTrap("PointerTest");
	ClapTrap* base_ptr = scav_ptr;
	base_ptr->attack("PolymorphismTarget");
	scav_ptr->guardGate();
	delete scav_ptr;
	std::cout << "\n=== ALL TESTS COMPLETED ===" << std::endl;
}
