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

#ifndef LION_H
#define lION_H

#include "WildCat.h"


class Lion 
    : public WildCat 
{
public:
    //Default constructor
    Lion();

    //The constructor of the Lion class that initializes the key data members used for the Zoo Management program.
    Lion(string name, string type, int age, double weight, int id);

    //Default destructor
    ~Lion();

    // A virtual function that gets the habitat of an animal.
    virtual void getHabitat() override;

    // A virtual function that gets the diet of an animal.
    virtual void getDiet() override;

    // A virtual function that gets the frequency of feeding of an animal.
    virtual void getFeedingFrequency() override;

    // A virtual function for the draw action of an animal.
    virtual void draw() const override;

    // Overriding the makeSound function for Lion
    void makeSound() override;

    //Member function peculiar to Lions, output info on how lions live in groups called prides
    void liveInPride();

    //Member function peculiar to Lions, output info on how lions are not good scavengers
    void scavenge();

    // Member function peculiar to wildcats,output info on how wild cats stalk preys
    virtual void stalkPrey() override;

    // Member function peculiar to wildcats,output info on how wild cats sharpen their claws
    virtual void sharpenClaws() override;

    // Member function peculiar to wildcats,output info on how wild cats mark their territory
    virtual void markTerritory() override;
};
#endif