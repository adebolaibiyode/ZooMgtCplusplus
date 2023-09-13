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
* This is a derived class from Mammal
*/

#include "WildCat.h"

//Default constructor
WildCat::WildCat()
{
}

//The constructor of the Wildcat class that initializes the key data members used for the Zoo Management program.
WildCat::WildCat(string name, string type, int age, double weight, int id)
	:Mammal(name, type, age, weight, id)
{
	cout << "\nWild Cats are Mammals.\n";
}

//Default destructor
WildCat::~WildCat()
{
}

// A virtual function that gets the habitat of an animal.
void WildCat::getHabitat()
{
	Mammal::getHabitat(); //invoke Mammal's gethabitat function
	cout << "\nWildcats inhabit a variety of environments, from dense forests and grasslands to semi-arid landscapes, depending on the species and region.\n";
}

// A virtual function that gets the diet of an animal.
void WildCat::getDiet()
{
	cout << "\nAs Mammals:\n";
	Mammal::getDiet(); //invoke Mammal's getDiet function
	cout << "\nWildcats primarily feed on small mammals, birds, and insects, with specific prey varying based on their habitat and region.\n";
}

// A virtual function that gets the frequency of feeding of an animal.
void WildCat::getFeedingFrequency()
{
	Mammal::getFeedingFrequency(); //invoke Mammal's getFeedingFrequency function
	cout << "\nWildcats, being carnivorous predators, typically feed once every one to two days, though this can vary based on prey availability and the specific species.\n";
}

void WildCat::draw() const
{
	cout << " /\\_/\\ " << endl;
	cout << "( o.o )" << endl;
	cout << " > ^ < " << endl;
}

// Overriding the growHair function to reflect the pattern of wildcats
void WildCat::growHair()
{
	cout << "\nWildcats grow hair or fur as a protective covering that aids in insulation, camouflage, and sensory perception, with the density, length, and pattern varying among species and habitats.";
}

// Overriding the makeSound function to specify typical wildcat sounds
void WildCat::makeSound()
{
	Mammal::makeSound();
}
// Member function peculiar to wildcats,output info on how wild cats stalk preys
void WildCat::stalkPrey()
{
	cout << "\nWildcats stealthily approach their prey using cover and silent movement, minimizing visibility until they are close enough for a rapid chase or pounce.\n";
}

// Member function peculiar to wildcats,output info on how wild cats sharpen their claws
void WildCat::sharpenClaws()
{
	//Each derived class will output appropriate information.
}

// Member function peculiar to wildcats,output info on how wild cats mark their territory
void WildCat::markTerritory()
{
	//Each derived class will output appropriate information.
}
