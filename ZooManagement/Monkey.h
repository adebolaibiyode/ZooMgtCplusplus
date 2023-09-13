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
* This is a derived class from Ape
*/

#ifndef MONKEY_H
#define MONKEY_H

#include "Ape.h"

class Monkey
    : public Ape 
{
public:
    //Default constructor
    Monkey();

    //The constructor of the Monkey class that initializes the key data members used for the Zoo Management program.
    Monkey(string name, string type, int age, double weight, int id);

    //Default destructor
    ~Monkey();

    // Overriding function that gets the habitat of an animal.
    void getHabitat() override;

    //Overriding function that gets the diet of an animal.
    void getDiet() override;

    //Overriding function that gets the frequency of feeding of an animal.
    void getFeedingFrequency() override;

    // A virtual function for the draw action of an animal.
    void draw() const override;

    // Overriding the makeSound function for Monkey
    void makeSound() override;

    //Member function peculiar to Monkey, output info on how monkeys swing on trees
    void swingOnBranches();

    //Member function peculiar to Monkey, output info on how monkeys forage for food
    void forage();

    // Overriding the giveBirth function to indicate the typical longer development of ape offspring
    void giveBirth() override;

    // Overriding the growHair function to highlight the hair pattern of apes
    void growHair() override;
 
    // Overriding function peculiar to apes, output info on how apes use tools to sort out food
    void useTools() override;

    //Overriding function peculiar to Ape, output info on how apes walk upright
    void walkUpright() override;

    // Overriding function peculiar to apes, output info on how apes like to socialize
    void socialize() override;
};

#endif

