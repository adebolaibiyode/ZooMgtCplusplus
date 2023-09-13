/*
* Adebola Ibiyode
* Professor Jonathan S. Weissman
* CIS 554-M400 Object Oriented Programming in C++ Syracuse University
* Project
* 9/06/23
*
* This is a Zoo management console application
* This application will allow users to:
*
*	Add a new animal abd categorize apprpriately.
*	Determine the habitat, Diet, Feeding Frequency, and other key functions for taking care of an animal in a zoo.
*	Search for a an animal in the zoo.
*
*	The program will contain:
*
*	An array to keep track of a set number of animals in the zoo.
*	A vector to store all the animals.
*	Both traditional and range-based for loops for different operations.
*
* This is a derived class from WILDCAT
*/
#include "Jaguar.h"

//Default constructor
Jaguar::Jaguar()
{
}

//The constructor of the Jaguar class that initializes the key data members used for the Zoo Management program.
Jaguar::Jaguar(string name, string type, int age, double weight, int id)
	:WildCat(name, type, age, weight, id)
{
	cout << "Jaguars are Wild Cats.\n";
}

//Default destructor
Jaguar::~Jaguar()
{
}

// A virtual function that gets the habitat of an animal.
void Jaguar::getHabitat()
{
	Mammal::getHabitat();
	cout << "\nJaguars primarily inhabit tropical rainforests, swamps, grasslands, and deciduous forests in Central and South America.\n";
}

// A virtual function that gets the diet of an animal.
void Jaguar::getDiet()
{
	cout << "\nJaguars are apex predators that consume a variety of prey, from large ungulates like deer to smaller animals, reptiles, and even fish, showcasing their adaptability in diverse habitats.\n";
}

// A virtual function that gets the frequency of feeding of an animal.
void Jaguar::getFeedingFrequency()
{
	cout << "\nJaguars, feeding on varied prey sizes, might consume smaller meals daily but can also go days between substantial kills, depending on the size and type of prey captured.\n";
}

// A virtual function for the draw action of an animal.
void Jaguar::draw() const
{
	cout << "   /\\_/\\" << endl;
	cout << "  / - - \\" << endl;
	cout << " ( x \" x )" << endl;
	cout << "  >^x x^<" << endl;
	cout << " / x   x \\" << endl;
}

// Overriding the makeSound function for Jaguar
void Jaguar::makeSound()
{
	cout << "\nJaguars communicate using various sounds, including roars, growls, chuffing, and hisses, to establish territory, signal readiness to mate, or convey emotions.\n";
}

//Member function peculiar to Jaguars, output info on how jaguars are good climbers
void Jaguar::climbTrees()
{
	cout << "\nJaguars, with their powerful limbs and retractable claws, are adept climbers, often ascending trees for vantage points, to ambush prey, or to place a kill away from ground scavengers.\n";
}

//Member function peculiar to Jaguars, output info on how jaguars are stealth when hunting
void Jaguar::ambushPrey()
{
	cout << "\nJaguars employ stealth and their camouflage pattern to approach prey silently, often from dense vegetation or elevated vantage points, before launching a rapid and powerful strike.\n";
}

// Member function peculiar to wildcats,output info on how wild cats stalk preys
void Jaguar::stalkPrey()
{
	cout << "\nJaguars rely on their spotted camouflage in dense rainforests and riversides, silently stalking and then pouncing on their unsuspecting prey from behind or from above.\n";
}

// Member function peculiar to wildcats,output info on how wild cats sharpen their claws
void Jaguar::sharpenClaws()
{
	cout << "\nJaguars, similarly, use trees and other rough surfaces in their rainforest and grassland habitats to hone their claws and mark their presence.\n";
}

// Member function peculiar to wildcats,output info on how wild cats mark their territory
void Jaguar::markTerritory()
{
	cout << "\nJaguars demarcate their territories primarily through scent marking with urine and feces, as well as by leaving visual signs, like claw marks on trees.\n";
}
