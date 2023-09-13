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

#include "Tiger.h"

//Default constructor
Tiger::Tiger()
{
}

//The constructor of the Tiger class that initializes the key data members used for the Zoo Management program.
Tiger::Tiger(string name, string type, int age, double weight, int id)
	:WildCat(name, type, age, weight, id)
{
	cout << "Tigers are Wild Cats.\n";
}

//Default destructor
Tiger::~Tiger()
{
}

// A virtual function that gets the habitat of an animal.
void Tiger::getHabitat()
{
	Mammal::getHabitat();
	cout << "\nTigers inhabit a range of environments, from tropical rainforests and swamps to grasslands and temperate forests, primarily in Asia.\n";
}

// A virtual function that gets the diet of an animal.
void Tiger::getDiet()
{
	Mammal::getDiet();
	cout << "\nTigers are carnivorous apex predators that primarily feed on large ungulates, such as deer and wild boar, but can also consume smaller animals or even fish when necessary.\n";
}

// A virtual function that gets the frequency of feeding of an animal.
void Tiger::getFeedingFrequency()
{
	cout << "\nTigers, given the large size of their typical prey, might feed once every few days, consuming large amounts at one time and then resting as they digest.\n";
}

// A virtual function for the draw action of an animal.
void Tiger::draw() const
{
	cout << "  /\\_/\\ " << endl;
	cout << " /o.o \\ >" << endl;  // Added a simple stripe
	cout << "| >^ < |" << endl;  // Added a simple stripe on either side
	cout << " \\ - / " << endl;   // Indicates body with a stripe
}

// Overriding the makeSound function for Tiger
void Tiger::makeSound()
{
	cout << "\nTigers communicate using a range of sounds, including roars, growls, chuffs, and moans, each serving different purposes from establishing territory to social interactions.\n";
}

//Member function peculiar to Tigers, output info on how tigers are good swimmers
void Tiger::swim()
{
	cout << "\nTigers are adept swimmers, often entering water to cool off or hunt, using their strong limbs to propel them efficiently through aquatic environments.\n";
}

//Member function peculiar to Tigers, output info on how tigers are solo hunters
void Tiger::solitaryHunt()
{
	cout << "\nTigers typically hunt alone, relying on stealth and ambush tactics, marking and defending large territories to ensure adequate prey availability.\n";
}


// Member function peculiar to wildcats,output info on how wild cats stalk preys
void Tiger::stalkPrey()
{
	cout << "\nTigers, masters of stealth in their varied habitats, use a combination of their striped fur and the dense underbrush to get close to their prey before launching a powerful and rapid ambush.\n";
}

// Member function peculiar to wildcats,output info on how wild cats sharpen their claws
void Tiger::sharpenClaws()
{
	cout << "\nTigers frequently scratch on trees, not only to keep their claws sharp but also as a visual and scent-marking behavior to communicate with other tigers in the area.\n";
}

// Member function peculiar to wildcats,output info on how wild cats mark their territory
void Tiger::markTerritory()
{
	cout << "\nTigers assert their domain by spraying urine, rubbing against trees to leave scent from their facial glands, and creating visual markers through scratching patterns on tree trunks.\n";
}

