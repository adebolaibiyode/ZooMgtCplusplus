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

#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include <iostream>
using std::cout;
using std::endl;

class Mammal
	:public Animal
{
public:
	//Default constructor
	Mammal();

	//The constructor of the Mamal class that initializes the key data members used for the Zoo Management program.
	Mammal(string name, string type, int age, double weight, int id);

	//Default destructor
	~Mammal();

	// A virtual function that gets the habitat of an animal.
	virtual void getHabitat() override;

	// A virtual function that gets the diet of an animal.
	virtual void getDiet() override;

	// A virtual function that gets the frequency of feeding of an animal.
	virtual void getFeedingFrequency() override;

	// A virtual function for the draw action of an animal.
	virtual void draw() const override;

	// A virtual function to output information about how mammals produce milk.
	virtual void produceMilk();

	// A virtual function to output information about how mammals give birt.
	virtual void giveBirth();

	//A virtual function to output information about how mammals regulate body temperature.
	virtual void regulateBodyTemperature();

	//A virtual function to output information about how mammals grow hair or fur.
	virtual void growHair();

	//A virtual function to output information about how mammals make sounds.
	virtual void makeSound();

	//A virtual function to output information about how mammals breathe with diaphragm.
	void breatheWithDiaphragm();

	//A virtual function to output information about how mammals provide parental care.
	void provideParentalCare();
};
#endif
