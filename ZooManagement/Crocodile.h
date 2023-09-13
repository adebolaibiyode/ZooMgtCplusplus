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
* This is a derived class from REPTILE
*/

#ifndef CROCODILE_H
#define CROCODILE_H

#include "Reptile.h"

class Crocodile
    : public Reptile 
{
public:
    //Default constructor
    Crocodile();

    //The constructor of the Crocodile class that initializes the key data members used for the Zoo Management program.
    Crocodile(string name, string type, int age, double weight, int id);

    //Default destructor
    ~Crocodile();

    // A virtual function that gets the habitat of an animal.
    virtual void getHabitat() override;

    // A virtual function that gets the diet of an animal.
    virtual void getDiet() override;

    // A virtual function that gets the frequency of feeding of an animal.
    virtual void getFeedingFrequency() override;

    // A virtual function for the draw action of an animal.
    virtual void draw() const override;

    // Overriding the move function because crocodiles can swim
    void move() override;

    // Overriding the makeSound function for Crocodile
    void makeSound() override;

    //Member function peculiar to Crocodile, output info on how they ambush preys
    void ambushPrey();

    //Member function peculiar to Crocodile, output info on how they have strong jaw bite
    void strongJawBite();

    //Member function peculiar to Crocodile, output info on how they build nests
    void buildNests();
};


#endif