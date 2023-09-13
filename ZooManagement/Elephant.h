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

#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "Mammal.h"


class Elephant 
    : public Mammal 
{
public:
    //Default constructor
    Elephant();

    //The constructor of the Elephant class that initializes the key data members used for the Zoo Management program.
    Elephant(string name, string type, int age, double weight, int id);

    //Default destructor
    ~Elephant();

    //Override function that gets the habitat of an animal.
    void getHabitat() override;

    // Override function that gets the diet of an animal.
    void getDiet() override;

    // Override function that gets the frequency of feeding of an animal.
    void getFeedingFrequency() override;

    // Override function for the draw action of an animal.
    void draw() const override;

    // Overriding the growHair function for Elephant to represent its sparse hair
    void growHair() override;

    // Overriding the makeSound function for Elephant
    void makeSound() override;

    // Overriding the giveBirth function for Elephant to reflect its long gestation period
    void giveBirth() override;

    //Member function peculiar to Elephants, output info on how elephants use trunks
    void useTrunk();

    //Member function peculiar to Elephants, output info on how elephants have tusks
    void haveTusks();

    //Member function peculiar to Elephants, output info on how elephants form matriach let family groups
    void formMatriarchalGroups();

    //Member function peculiar to Elephants, output info on how elephants use mud to protect their skin
    void mudBathing();
};
#endif