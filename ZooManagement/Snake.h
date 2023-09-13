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

#ifndef SNAKE_H
#define SNAKE_H

#include "Reptile.h"

class Snake
	:public Reptile
{
public:
    //Default constructor
    Snake();

    //The constructor of the Snake class that initializes the key data members used for the Zoo Management program.
    Snake(string name, string type, int age, double weight, int id);

    //Default destructor
    ~Snake();

    // A virtual function that gets the habitat of an animal.
    virtual void getHabitat() override;

    // A virtual function that gets the diet of an animal.
    virtual void getDiet() override;

    // A virtual function that gets the frequency of feeding of an animal.
    virtual void getFeedingFrequency() override;

    // A virtual function for the draw action of an animal.
    virtual void draw() const override;

    //Virtual function, output movement info on reptiles
    virtual void move() override;

    //Virtual function, output how reptiles lay eggs
    virtual void layEggs() override;

    //Virtual function, output how reptiles make sound
    virtual void makeSound() override;

    //Virtual function, output how reptiles sunbathe
    virtual void sunbathe() override;

    //Virtual function, output how reptiles shed skin
    virtual void shedSkin() override;

    // Peculiar function for Snake
    void slither();
};
#endif
