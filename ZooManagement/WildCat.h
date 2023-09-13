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

#ifndef WILDCAT_H
#define WILDCAT_H

#include "Mammal.h"


class WildCat
    : public Mammal 
{
public:
    //Default constructor
    WildCat();

    //The constructor of the Wildcat class that initializes the key data members used for the Zoo Management program.
    WildCat(string name, string type, int age, double weight, int id);

    //Default destructor
    ~WildCat();

    // A virtual function that gets the habitat of an animal.
    virtual void getHabitat() override;

    // A virtual function that gets the diet of an animal.
    virtual void getDiet() override;

    // A virtual function that gets the frequency of feeding of an animal.
    virtual void getFeedingFrequency() override;

    // A virtual function for the draw action of an animal.
    virtual void draw() const override;

    // Overriding the growHair function to reflect the pattern of wildcats
    void growHair() override;

    // Overriding the makeSound function to specify typical wildcat sounds
    void makeSound() override;

    // Member function peculiar to wildcats,output info on how wild cats stalk preys
    virtual void stalkPrey();

    // Member function peculiar to wildcats,output info on how wild cats sharpen their claws
    virtual void sharpenClaws();

    // Member function peculiar to wildcats,output info on how wild cats mark their territory
    virtual void markTerritory();
};
#endif

