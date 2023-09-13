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
*/


#ifndef ZOO_H
#define ZOO_H

#include <string>
#include "Animal.h"
#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;
using std::string;


class Zoo
{
public:
    //Default constructor to initialize the Zoo object
    Zoo();

    //A member function takes a reference to an Animal object
    //Also ensuring the Animal object cannot be modified in this function  - using the const keyword.
    void addAnimal(Animal* animal);

    //A member function to get the animal member data
    vector<Animal*> getAnimals() ;

    //A member function that returns a pointer to a Book object. 
    //If the animal is not found at the address the function would return a nullptr (inidcating no address).
    //Finally, the function expects a reference to the string object representing the name of the animal, with the const keyword to disallow modification.
    Animal* searchByName(const string& name);

    void draw() const;

private:
    //create a vector of pointers to Animal objects
    vector<Animal*> _animals;
    int _animalIds[100] = { 0 };  // assuming a max of 100 animals for simplicity and initialize all elements to 0
    int _currentId = 0;
};
#endif

