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

#include "Gorilla.h"

//Default constructor
Gorilla::Gorilla()
{
}

//The constructor of the Gorilla class that initializes the key data members used for the Zoo Management program.
Gorilla::Gorilla(string name, string type, int age, double weight, int id)
	:Ape(name, type, age, weight, id)
{
	cout << "Gorillas are Apes.\n";
}

//Default destructor
Gorilla::~Gorilla(){ }

// A  function that gets the habitat of an animal.
 void Gorilla::getHabitat() { 
	 cout << "\nGorillas primarily inhabit the dense rainforests and montane forests of central Africa.\n";
 }

// A  function that gets the diet of an animal.
 void Gorilla::getDiet() { 
	 cout << "\nGorillas are primarily herbivores, consuming a diet rich in leaves, stems, fruits, and occasionally insects.\n";
 }

// A  function that gets the frequency of feeding of an animal.
 void Gorilla::getFeedingFrequency() {
	 cout << "\nGorillas feed throughout the day, foraging in the morning and late afternoon, with resting periods in between.\n";
 }

// A  function for the draw action of an animal.
 void Gorilla::draw() const {
	 Ape::draw();
 }

// Overriding the makeSound function for Gorilla
void Gorilla::makeSound() 
{
	cout << "\nGorillas communicate through a diverse range of vocalizations, gestures, and facial expressions, from gentle grunts while foraging to the intense chest-beating display of the silverback.\n";
}

// Member function peculiar to Gorilla,output info on how gorillas beat their chest
void Gorilla::beatChest()
{
	cout << "\nGorillas beat their chests using cupped hands to produce resonant sounds, a display often associated with dominance, attracting mates, or deterring rivals.\n";
}

//Member function peculiar to Gorilla, output info on how gorillas eat vegetation
void Gorilla::eatVegetation()
{
	cout << "\nGorillas primarily consume vegetation, meticulously selecting and processing various plant parts, like leaves, stems, and fruits, using their strong hands and teeth.\n";
}

// Overriding the giveBirth function to indicate the typical longer development of ape offspring
void Gorilla::giveBirth()
{
	cout << "\nFemale gorillas give birth to one offspring after a gestation period of around 8.5 months, with several years often passing before the next birth.\n";
}

// Overriding the growHair function to highlight the hair pattern of apes
void Gorilla::growHair()
{
	cout << "\nGorillas have thick, coarse hair that varies in color from black to silver, providing insulation and protection in their forest habitats.\n";
}

// Member function peculiar to apes, output info on how apes use tools to sort out food
void Gorilla::useTools()
{
	cout << "\nWhile gorillas have been observed using basic tools in the wild, such as sticks to gauge water depth or leaves as umbrellas, their tool use is not as extensive as that of some other primates.\n";
}

//Member function peculiar to Ape, output info on how apes walk upright
void Gorilla::walkUpright()
{
	cout << "\nGorillas can walk bipedally for short distances, especially when carrying food or in defensive situations, but predominantly move using quadrupedal knuckle-walking.\n";
}

// Member function peculiar to apes, output info on how apes like to socialize
void Gorilla::socialize()
{
	cout << "\nGorilla social structures are based around groups led by a dominant male, or silverback, with females and their offspring, maintaining close bonds and interacting frequently.\n";
}
