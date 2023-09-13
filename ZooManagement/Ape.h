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

#ifndef APE_H
#define APE_H

#include "Mammal.h"

class Ape
	:public Mammal
{
public:
    //Default constructor
    Ape();

    //The constructor of the Ape class that initializes the key data members used for the Zoo Management program.
    Ape(string name, string type, int age, double weight, int id);

    //Default destructor
    ~Ape();

    // A virtual function that gets the habitat of an animal.
    virtual void getHabitat() override;

    // A virtual function that gets the diet of an animal.
    virtual void getDiet() override;

    // A virtual function that gets the frequency of feeding of an animal.
    virtual void getFeedingFrequency() override;

    // A virtual function for the draw action of an animal.
    virtual void draw() const override;

    // Overriding the giveBirth function to indicate the typical longer development of ape offspring
    void giveBirth() override;

    // Overriding the growHair function to highlight the hair pattern of apes
    virtual void growHair() override;

    // Overriding the makeSound function to specify typical ape sounds
   virtual void makeSound() override;

    // Member function peculiar to apes, output info on how apes use tools to sort out food
    virtual void useTools() ;

    //Member function peculiar to Ape, output info on how apes walk upright
    virtual void walkUpright();

    // Member function peculiar to apes, output info on how apes like to socialize
    virtual void socialize();
};
#endif

