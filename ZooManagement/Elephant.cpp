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

#include "Elephant.h"

//Default constructor
Elephant::Elephant()
{
}

//The constructor of the Elephant class that initializes the key data members used for the Zoo Management program.
Elephant::Elephant(string name, string type, int age, double weight, int id)
	:Mammal(name, type, age, weight, id)
{
	cout << "\nElephants are mammals\n";
}

//Default destructor
Elephant::~Elephant()
{
}

// A virtual function that gets the habitat of an animal.
void Elephant::getHabitat()
{
	Mammal::getHabitat(); //invoke Mammal's gethabitat function
	cout << "\nElephants inhabit a variety of ecosystems including savannas, forests, swamps, and grasslands across Africa and parts of Asia.\n";
}

// A virtual function that gets the diet of an animal.
void Elephant::getDiet()
{
	cout << "\nAs Mammals:\n";
	Mammal::getDiet(); //invoke Mammal's getDiet function
	cout << "\nElephants are herbivores, primarily consuming grasses, fruits, bark, and foliage.\n";
}

// A virtual function that gets the frequency of feeding of an animal.
void Elephant::getFeedingFrequency()
{
	Mammal::getFeedingFrequency(); //invoke Mammal's getFeedingFrequency function
	cout << "\nElephants feed for up to 16 hours a day, ingesting hundreds of pounds of plant matter.\n";
}

void Elephant::draw() const
{
	cout << "    .-''-." << endl;   // Top of the head
	cout << "   /|    \\ " << endl;  // Head to trunk start
	cout << "  { o \\  o }" << endl;   // Upper trunk
	cout << "   `-\\__/" << endl;    // Lower trunk
	cout << "    `=='" << endl;      // Body
	cout << "     \\~\\ " << endl;    // Legs
	cout << "     |-\\| " << endl;   // Legs
	cout << "     \\__| " << endl;   // Legs and tail
	cout << "      \\__\\ " << endl;  // Base and hint of tail
	cout << "       `==' " << endl;  // End
}

// Overriding the growHair function for Elephant to represent its sparse hair
void Elephant::growHair()
{
	cout << "\nDespite their size, elephants have sparse hair growth which provides some protection against the sun and pests.\n";
}

// Overriding the makeSound function for Elephant
void Elephant::makeSound()
{
	cout << "\nElephants communicate using a variety of sounds, including trumpets, rumbles, and infrasound (low-frequency sounds below human hearing range), to convey emotions, signal danger, and maintain social bonds.\n";
}

// Overriding the giveBirth function for Elephant to reflect its long gestation period
void Elephant::giveBirth()
{
	cout << "\nElephants have a lengthy gestation period, giving birth after about 22 months to a single calf, though twins are rare but possible.\n";
}

//Member function peculiar to Elephants, output info on how elephants use trunks
void Elephant::useTrunk()
{
	cout << "\nThe trunk of an elephant is a versatile appendage, used for breathing, smelling, trumpeting, drinking, and grabbing objects, including food.\n";
}

//Member function peculiar to Elephants, output info on how elephants have tusks
void Elephant::haveTusks()
{
	cout << "\nElephants' tusks, elongated incisors, serve multiple purposes, including digging, stripping bark from trees, and as weapons in disputes.\n";
}

//Member function peculiar to Elephants, output info on how elephants form matriach let family groups
void Elephant::formMatriarchalGroups()
{
	cout << "\nElephant societies are matriarchal, with groups led by an elder female and consisting of related females and their offspring.\n";
}

//Member function peculiar to Elephants, output info on how elephants use mud to protect their skin
void Elephant::mudBathing()
{
	cout << "\nElephants take mud baths to cool down, protect their skin from sunburn, and deter parasites.";
}
