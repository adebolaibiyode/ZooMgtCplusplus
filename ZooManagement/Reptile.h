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

#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
#include <iostream>
using std::cout;
using std::endl;

class Reptile 
    :public Animal
{
public:
    //Default constructor
    Reptile();

    //The constructor of the Reptile class that initializes the key data members used for the Zoo Management program.
    Reptile(string name, string type, int age, double weight, int id);

    //Default destructor
    ~Reptile();

    // A virtual function that gets the habitat of an animal.
    virtual void getHabitat() override;

    // A virtual function that gets the diet of an animal.
    virtual void getDiet() override;

    // A virtual function that gets the frequency of feeding of an animal.
    virtual void getFeedingFrequency() override;

    // A virtual function for the draw action of an animal.
    virtual void draw() const override;

    //Virtual function, output movement info on reptiles
    virtual void move();

    //Virtual function, output how reptiles lay eggs
    virtual void layEggs();

    //Virtual function, output how reptiles make sound
    virtual void makeSound();

    //Virtual function, output how reptiles sunbathe
    virtual void sunbathe();

    //Virtual function, output how reptiles shed skin
    virtual void shedSkin();
};
#endif

