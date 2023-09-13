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
* This is a derived class from WildCat
*/

#include "Lion.h"

//Default constructor
Lion::Lion()
{
}

//The constructor of the Lion class that initializes the key data members used for the Zoo Management program.
Lion::Lion(string name, string type, int age, double weight, int id)
	:WildCat(name, type, age, weight, id)
{
	cout << "Lions are Wild Cats.\n";
}

//Default destructor
Lion::~Lion()
{
}

// A virtual function that gets the habitat of an animal.
void Lion::getHabitat()
{
	Mammal::getHabitat();
	cout << "\nLions predominantly inhabit grasslands, savannas, and open woodlands of Africa, with a small population found in the Gir Forest of India.\n";
}

// A virtual function that gets the diet of an animal.
void Lion::getDiet()
{
	cout << "\nLions are apex predators that primarily consume large ungulates such as wildebeest, zebra, and buffalo, but they also scavenge and eat smaller prey when opportunities arise.\n";
}

// A virtual function that gets the frequency of feeding of an animal.
void Lion::getFeedingFrequency()
{
	cout << "\nLions typically feed every three to four days, but this can vary depending on prey availability and the size of their kills.\n";
}

// A virtual function for the draw action of an animal.
void Lion::draw() const
{
    // Male lion with mane
    cout << "   .-\"-." << endl;
    cout << "  /|6 6|\\     <-- Male Lion" << endl;
    cout << " {/(_0_)\\}" << endl;
    cout << " _/ ^ ^ \\ _/`" << endl;
    cout << "(/ /^\\)-=/" << endl;
    cout << " \"\"'/' \"'\"" << endl;

    // Space between lions
    cout << endl << endl;

    // Female lion without mane
    cout << "   .-.-." << endl;
    cout << "  /| o o |\\    <-- Female Lion" << endl;
    cout << " // \\_^_/ \\" << endl;
    cout << " ``\\ \"// \"'`" << endl;
    cout << "    \\//\\/" << endl;
}

// Overriding the makeSound function for Lion
void Lion::makeSound()
{
	cout << "\nLions communicate using a range of vocalizations, including powerful roars, growls, grunts, and moans, to establish territory, coordinate group activities, and convey emotions.\n";
}

//Member function peculiar to Lions, output info on how lions live in groups called prides
void Lion::liveInPride()
{
	cout << "\nLions are unique among big cats in that they live in social groups called prides, typically consisting of related females, their offspring, and a coalition of males that defend the territory and females.\n";
}

//Member function peculiar to Lions, output info on how lions are not good scavengers
void Lion::scavenge()
{
	cout << "\nWhile lions do scavenge when opportunities arise, they are primarily predators and often lose scavenged food to more specialized scavengers like hyenas due to the latter''s greater numbers and persistence.\n";
}

// Member function peculiar to wildcats,output info on how wild cats stalk preys
void Lion::stalkPrey()
{
	cout << "\nLions use the open savanna's tall grasses to their advantage, approaching their prey in coordinated group tactics to corner and ambush it.\n";
}

// Member function peculiar to wildcats,output info on how wild cats sharpen their claws
void Lion::sharpenClaws()
{
	cout << "\nLions sharpen their claws by raking them against tree trunks, helping to remove worn-out outer layers and keeping them ready for hunting and territory marking.\n";
}

// Member function peculiar to wildcats,output info on how wild cats mark their territory
void Lion::markTerritory()
{
	cout << "\nLions mark their territory using a combination of roaring to broadcast their presence and scent marking with urine and gland secretions on trees, rocks, and the ground.\n";
}
