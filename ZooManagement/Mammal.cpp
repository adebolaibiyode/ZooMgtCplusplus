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

#include "Mammal.h"

//Default constructor
Mammal::Mammal()
{
}

//The constructor of the Mamal class that initializes the key data members used for the Zoo Management program.
Mammal::Mammal(string name, string type, int age, double weight, int id)
	:Animal(name,type,age,weight,id)
{
}

//Default destructor
Mammal::~Mammal()
{
}

// A virtual function that gets the habitat of an animal.
void Mammal::getHabitat()
{
	cout << "\nMammals are an incredibly diverse group of animals, and as such, they inhabit a wide range of habitats around the world."
		<< "\nThese habitats are either Terrestrial Habitats (includes Deserts, Grasslands, Mountains, Forests), Aquatic Habitats, Aerial, Subterranean,etc."
		<< "\n";
}

// A virtual function that gets the diet of an animal.
void Mammal::getDiet()
{
	cout << "\nMammals can be herbivores, carnivores, omnivores, or insectivores, depending on their evolutionary adaptations and ecological niches."
		<< "\nAs habitats and available resources change, many mammals exhibit flexibility in their diets to take advantage of available food sources.";
}

// A virtual function that gets the frequency of feeding of an animal.
void Mammal::getFeedingFrequency()
{
	cout << "\nThe feeding frequency of mammals varies widely based on their size, metabolic rate, diet, and ecological niche.";
}

// A virtual function for the draw action of an animal.
void Mammal::draw() const
{
	cout << "   ___" << endl;
	cout << "  /   \\" << endl;
	cout << " / o o \\" << endl;
	cout << "(   \"   )" << endl;
	cout << " \\~*.*~/" << endl;
	cout << "  - ^ -" << endl;
	cout << "The mammal, Ape.\n";
}

// A virtual function to output information about how mammals produce milk.
void Mammal::produceMilk()
{
	cout << "\nLactation: Mammals produce milk to nourish their young. This function is performed by mammary glands."
		 << "\nMammals are distinctively characterized by their ability to produce milk, a nutrient-rich secretion that provides essential sustenance and antibodies to their young.";
}

// A virtual function to output information about how mammals give birt.
void Mammal::giveBirth()
{
	cout << "\nViviparity: Most mammals give birth to live young (as opposed to laying eggs). This isn't universal, as there are egg-laying mammals like the platypus and echidna.\n";
}

//A virtual function to output information about how mammals regulate body temperature.
void Mammal::regulateBodyTemperature()
{
	cout << "\nWarm - blooded(Endothermy) : Mammals regulate their internal body temperature, typically maintaining it at a level that supports metabolic processes.\n";
}

//A virtual function to output information about how mammals grow hair or fur.
void Mammal::growHair()
{
	cout << "\nHair or Fur: At some stage in their life, all mammals have hair or fur.\n";
}

//A virtual function to output information about how mammals make sounds.
void Mammal::makeSound()
{
	//Each derived class will output appropriate information.
}

//A virtual function to output information about how mammals breathe with diaphragm.
void Mammal::breatheWithDiaphragm()
{
	cout << "\nBreathing with Diaphragm: Mammals have a diaphragm that helps in the breathing process.\n";
}

//A virtual function to output information about how mammals provide parental care.
void Mammal::provideParentalCare()
{
	cout << "\nParental Care: Many mammals exhibit a high degree of parental care, ensuring the safety and well-being of their young.\n";
}
