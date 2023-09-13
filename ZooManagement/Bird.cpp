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
* This is a derived class from Animal
*/

#include "Bird.h"

//Default constructor
Bird::Bird()
{
}

//The constructor of the Bird class that initializes the key data members used for the Zoo Management program.
Bird::Bird(string name, string type, int age, double weight, int id)
	:Animal(name, type, age, weight, id)
{
}

//Default destructor
Bird::~Bird()
{
}

// A virtual function that gets the habitat of an animal.
void Bird::getHabitat()
{
	cout << "\nBirds, much like mammals, are found in a vast array of habitats around the world, given their incredible diversity and adaptability."
		<< "\nTheir habitats span from the frozen tundras of the polar regions to the hottest deserts.\n";
}

// A virtual function that gets the diet of an animal.
void Bird::getDiet()
{
	cout << "\nBirds exhibit a wide variety of dietary habits, reflecting their vast diversity and the range of environments they inhabit."
		<< "\nBirds can be Granivores (Seed-eaters), Insectivores, Carnivores, Frugivores, Nectarivores, Scavengers, etc.\n";
}

// A virtual function that gets the frequency of feeding of an animal.
void Bird::getFeedingFrequency()
{
	cout << "\nBirds' feeding frequency varies widely based on their size, metabolic rate, diet, and environmental conditions, with small birds like hummingbirds needing to feed almost constantly due to their high metabolism, while larger birds like eagles might eat less frequently, especially after a large meal."
		<< "\nSeasonal changes, food availability, and life stages, such as nesting or migration, can also influence how often birds eat throughout the day.\n";
}

//A virtual function for the draw action of an animal.
void Bird::draw() const
{
	cout << "  \\ _ /" << endl;
	cout << "  (o o)" << endl;
	cout << ">^   ^<" << endl;
	cout << "The Bird.\n";
}

//Virtual function, output flying info on birds
void Bird::fly()
{
	//to be overriden by the derived class
}

//Virtual function, output info on how birds lay eggs
void Bird::layEggs()
{
	cout << "\nAll birds reproduce by laying eggs.\n";
}

//Virtual function, output info on bird sounds
void Bird::makeSound()
{
	//Each derived class will output appropriate information.
}

//Virtual function, output info on how birds preed fethers
void Bird::preenFeathers()
{
	cout << "\nBirds preen their feathers to maintain them in top condition; during preening, they use their beaks to clean, straighten, and realign each feather, removing dirt, parasites, and loose or damaged feathers. Additionally, many birds have a preen gland near the base of their tail that secretes an oily substance, which they distribute over their feathers during preening to waterproof and condition them, ensuring both insulation and buoyancy."
		<< "\nThis meticulous grooming process not only keeps feathers looking their best but is essential for flight, insulation, and overall health.\n";
}

//Virtual function, output info on how birds migrate in seasons
void Bird::migrate()
{
	cout << "\nBird migration is a complex behavior where birds travel from one habitat to another, often spanning continents, in response to changing seasonal conditions."
		<< "\nMigration allows birds to exploit the best habitats for breeding, raising young, and feeding, based on resource availability.\n";
}
