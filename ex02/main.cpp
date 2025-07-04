/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 22:04:10 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/04 22:16:48 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	ClapTrap* base_ptr2 = scav_ptr;
	base_ptr2->attack("PolymorphismTarget");
	scav_ptr->guardGate();
	delete scav_ptr;
	std::cout << "\n=== FRAGTRAP TESTS ===" << std::endl;
	std::cout << "\n--- Test 11: FragTrap Construction/Destruction Chain ---" << std::endl;
	{
		std::cout << "Creating FragTrap..." << std::endl;
		FragTrap frag1("Destroyer");
		std::cout << "FragTrap created! Now destroying..." << std::endl;
	}
	std::cout << "FragTrap destroyed!" << std::endl;
	std::cout << "\n--- Test 12: FragTrap Basic Combat ---" << std::endl;
	FragTrap frag2("Demolisher");
	FragTrap frag3("Crusher");
	frag2.attack("Crusher");
	frag3.takeDamage(30);
	frag3.beRepaired(15);
	std::cout << "\n--- Test 13: FragTrap vs ScavTrap Combat ---" << std::endl;
	FragTrap frag4("PowerHouse");
	ScavTrap scav8("Guardian");
	std::cout << "FragTrap attacks ScavTrap:" << std::endl;
	frag4.attack("Guardian");
	scav8.takeDamage(30);
	std::cout << "ScavTrap fights back:" << std::endl;
	scav8.attack("PowerHouse");
	frag4.takeDamage(20);
	std::cout << "\n--- Test 14: FragTrap vs ClapTrap Combat ---" << std::endl;
	FragTrap frag5("Giant");
	ClapTrap clap5("Tiny");
	std::cout << "FragTrap attacks ClapTrap:" << std::endl;
	frag5.attack("Tiny");
	clap5.takeDamage(30);
	std::cout << "ClapTrap is completely outmatched:" << std::endl;
	clap5.attack("Giant");
	frag5.takeDamage(0);
	std::cout << "\n--- Test 15: FragTrap Special Ability ---" << std::endl;
	FragTrap frag6("Friendly");
	frag6.highFivesGuys();
	frag6.attack("Enemy");
	frag6.highFivesGuys();
	frag6.beRepaired(10);
	frag6.highFivesGuys();
	std::cout << "\n--- Test 16: FragTrap Energy Management ---" << std::endl;
	FragTrap frag7("Energetic");
	std::cout << "FragTrap has 100 energy points. Testing attacks:" << std::endl;
	for (int i = 0; i < 102; i++) {
		if (i == 99) std::cout << "Should have 1 energy left..." << std::endl;
		if (i == 100) std::cout << "Should be out of energy now..." << std::endl;
		frag7.attack("Target");
	}
	std::cout << "\n--- Test 17: FragTrap Durability Test ---" << std::endl;
	FragTrap frag8("Tank");
	std::cout << "FragTrap has 100 HP. Testing damage:" << std::endl;
	frag8.takeDamage(40);
	frag8.beRepaired(30);
	frag8.takeDamage(60);
	frag8.takeDamage(50);
	frag8.attack("DeadTarget");
	frag8.highFivesGuys();
	std::cout << "\n--- Test 18: Multiple FragTraps ---" << std::endl;
	FragTrap squad[3] = {FragTrap("Delta"), FragTrap("Echo"), FragTrap("Foxtrot")};
	for (int i = 0; i < 3; i++) {
		squad[i].highFivesGuys();
		squad[i].attack("Enemy");
	}
	std::cout << "\n--- Test 19: FragTrap Inheritance Verification ---" << std::endl;
	FragTrap* frag_ptr = new FragTrap("PointerTest");
	ClapTrap* base_ptr1 = frag_ptr;
	base_ptr1->attack("PolymorphismTarget");
	frag_ptr->highFivesGuys();
	delete frag_ptr;
	std::cout << "\n--- Test 20: All Three Classes Battle Royale ---" << std::endl;
	ClapTrap clap_fighter("ClapChamp");
	ScavTrap scav_fighter("ScavChamp");
	FragTrap frag_fighter("FragChamp");
	std::cout << "Battle begins!" << std::endl;
	frag_fighter.attack("ScavChamp");
	scav_fighter.takeDamage(30);
	scav_fighter.attack("FragChamp");
	frag_fighter.takeDamage(20);
	clap_fighter.attack("FragChamp");
	frag_fighter.takeDamage(0);
	std::cout << "Special abilities showcase:" << std::endl;
	scav_fighter.guardGate();
	frag_fighter.highFivesGuys();
	std::cout << "Battle royale complete!" << std::endl;
	std::cout << "\n=== ALL TESTS COMPLETED ===" << std::endl;
}
