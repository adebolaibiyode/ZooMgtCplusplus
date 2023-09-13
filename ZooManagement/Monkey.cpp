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
* This is a derived class from APE
*/

#include "Monkey.h"

//Default constructor
Monkey::Monkey()
{
}

//The constructor of the Monkey class that initializes the key data members used for the Zoo Management program.
Monkey::Monkey(string name, string type, int age, double weight, int id)
	:Ape(name, type, age, weight, id)
{
    cout << "Monkeys are Apes\n";
}

//Default destructor
Monkey::~Monkey() { }

// A  function that gets the habitat of an animal.
void Monkey::getHabitat() {
	cout << "\nMonkeys are diverse primates with varied habitats, but to provide generalized information:"
		<< "\nMonkeys inhabit a range of environments, from tropical rainforests and savannas in Africa and South America to temperate zones in Asia.\n";
}

// A  function that gets the diet of an animal.
void Monkey::getDiet() {
	cout << "\nMost monkeys are omnivorous, eating a mixture of fruits, leaves, insects, and occasionally smaller animals.\n";
}

// A  function that gets the frequency of feeding of an animal.
void Monkey::getFeedingFrequency() {
	cout << "\nMonkeys typically feed throughout the day, constantly foraging during their active hours..\n";
}

// A  function for the draw action of an animal.
void Monkey::draw() const {
    cout << "         ___" << endl;
    cout << "       _/   \\_" << endl;
    cout << "     _/       \\_" << endl;
    cout << "     |  \\_/  / |" << endl;
    cout << "   \\_|  o o  |_/" << endl;
    cout << "     \\  ^  /   |" << endl;
    cout << "      '-----'   |" << endl;
    cout << "      |       \\ |" << endl;
    cout << "      |         ||" << endl;
    cout << "      |_________||" << endl;
    cout << "      |  \\ /  |  |" << endl;
    cout << "      |   |   |__|" << endl;
    cout << "      |   |   |  |" << endl;
    cout << "      |   |   |  |" << endl;
    cout << "      |___|___|__|" << endl;
    cout << "      '---' '---'" << endl;
}

// Overriding the makeSound function for Monkey
void Monkey::makeSound()
{
	cout << "\nMonkeys communicate through a variety of vocalizations, facial expressions, and gestures to convey emotions, signal danger, or maintain group cohesion.\n";
}

// Member function peculiar to Monkey,output info on how Monkeys swing on branches
void Monkey::swingOnBranches()
{
	cout << "\nMonkeys use their strong, flexible limbs and, in some species, prehensile tails to skillfully swing(or brachiate) between branches. \n";
}

//Member function peculiar to Monkey, output info on how Monkeys forage
void Monkey::forage()
{
	cout << "\nMonkeys forage throughout the day, using keen senses and dexterous hands to locate and process various foods, such as fruits, leaves, and insects.\n";
}

// Overriding the giveBirth function to indicate the typical longer development of ape offspring
void Monkey::giveBirth()
{
	cout << "\nFemale monkeys usually give birth to a single offspring after a species-specific gestation period, with some exceptions for certain species.\n";
}

// Overriding the growHair function to highlight the hair pattern of apes
void Monkey::growHair()
{
	cout << "\nMonkeys have dense fur that can vary in length and color, providing them with protection and aiding in thermoregulation..\n";
}

// Member function peculiar to apes, output info on how apes use tools to sort out food
void Monkey::useTools()
{
	cout << "\nSome monkey species, particularly capuchins, have been observed using tools for various purposes, like extracting insects or cracking nuts.\n";
}

//Member function peculiar to Ape, output info on how apes walk upright
void Monkey::walkUpright()
{
	cout << "\nWhile monkeys primarily use all fours for movement, some species can walk bipedally for short distances, especially when carrying items.\n";
}

// Member function peculiar to apes, output info on how apes like to socialize
void Monkey::socialize()
{
	cout << "\nMonkeys are highly social creatures, often forming structured groups with hierarchies and intricate social behaviors.\n";
}
