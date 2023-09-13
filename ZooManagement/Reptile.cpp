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
#include "Reptile.h"

//Default constructor
Reptile::Reptile()
{
}

//The constructor of the Reptile class that initializes the key data members used for the Zoo Management program.
Reptile::Reptile(string name, string type, int age, double weight, int id)
	:Animal(name, type, age, weight, id)
{
}

//Default destructor
Reptile::~Reptile()
{
}

// A virtual function that gets the habitat of an animal.
void Reptile::getHabitat()
{
	cout << "\nReptiles inhabit a diverse range of environments, from arid deserts and tropical rainforests to freshwater lakes and rivers, and even some marine ecosystems.\n";
}

// A virtual function that gets the diet of an animal.
void Reptile::getDiet()
{
	cout << "\nReptiles exhibit varied diets, with some species being carnivorous (feeding on animals), others herbivorous (feeding on plants), and many omnivorous (consuming both plant and animal matter).\n";
}

// A virtual function that gets the frequency of feeding of an animal.
void Reptile::getFeedingFrequency()
{
	cout << "\nThe feeding frequency of reptiles varies by species and size, with some, like many snakes, eating infrequently (once a week or less), while others, like most lizards, consume food daily or several times a week.\n";
}

// A virtual function for the draw action of an animal.
void Reptile::draw() const
{
    cout << "    ---" << endl;
    cout << "   /   \\" << endl;
    cout << "  /     \\" << endl;
    cout << " /-------\\" << endl;
    cout << "/         \\" << endl;
    cout << "\\         /" << endl;
    cout << " \\-------/" << endl;
    cout << "  \\     /" << endl;
    cout << "   \\   /" << endl;
    cout << "    ===" << endl;
    cout << "   <\\/>" << endl;
    cout << "   ^^^" << endl;
    cout << "The Reptile, snake.\n";
}

//Virtual function, output movement info on reptiles
void Reptile::move()
{
	cout << "\nReptiles move using diverse methods, including crawling, slithering, swimming, and, in the case of some lizards, occasional bipedal sprinting.\n";
}

//Virtual function, output how reptiles lay eggs
void Reptile::layEggs()
{
	cout << "\nMost reptiles lay eggs, though some species give birth to live young, with the egg-laying species often burying their eggs in soil, sand, or vegetation to protect them until hatching.\n";
}

//Virtual function, output how reptiles make sound
void Reptile::makeSound()
{
	//Each derived class will output appropriate information.
}

//Virtual function, output how reptiles sunbathe
void Reptile::sunbathe()
{
	cout << "\nReptiles sunbathe, or bask, to regulate their body temperature and aid in metabolism, as they are ectothermic animals that rely on external sources for heat.\n";
}

//Virtual function, output how reptiles shed skin
void Reptile::shedSkin()
{
	cout << "\nReptiles periodically shed their skin, a process called ecdysis, to accommodate growth and remove worn or damaged tissue.\n";
}
