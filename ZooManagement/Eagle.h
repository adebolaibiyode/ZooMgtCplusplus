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
* This is a derived class from Bird
*/

#ifndef EAGLE_H
#define EAGLE_H

#include "Bird.h"

class Eagle
    : public Bird
{
public:
    //Default constructor
	Eagle();

	//The constructor of the Eagle class that initializes the key data members used for the Zoo Management program.
	Eagle(string name, string type, int age, double weight, int id);

	//Default destructor
	~Eagle();

    // A virtual function that gets the habitat of an animal.
    virtual void getHabitat() override;

    // A virtual function that gets the diet of an animal.
    virtual void getDiet() override;

    // A virtual function that gets the frequency of feeding of an animal.
    virtual void getFeedingFrequency() override;

    // A virtual function for the draw action of an animal.
    virtual void draw() const override;

    // Overriding the makeSound function for Eagle
    void makeSound() override;

    //Member function peculiar to Eagles, output info on how they hunt from high
    void huntFromHigh();

    //Member function peculiar to Eagles, output info on how they have sharp vision
    void sharpVision();

    //Member function peculiar to Eagles, output info on how they build high nests
    void buildHighNests();
};


#endif