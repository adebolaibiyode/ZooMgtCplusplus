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
* This is a base class/
*/

#include "Animal.h"

//Default constructor
Animal::Animal()
{
}

/*
     * The constructor of the Animal class that initializes the key data members used for the Zoo Management program.
     * It takes 5 input parameters for the Name, Type, Age, Weight and Animal ID.
     */
Animal::Animal(string name, string type,int age, double weight, int id)
{
    setAge(age);
    setName(name);
    setWeight(weight);
    setID(id);
    setType(type);
}

//Default destructor
Animal::~Animal()
{
}

// A member function that gets the name of the animal.
string Animal::getName() const
{
    return _name;
}

// A member function that gets the age of the animal.
int Animal::getAge()
{
    return _age;
}

// A member function that gets the wight of the animal.
double Animal::getWeight()
{
    return _weight;
}

// A member function that sets the name of the animal.
void Animal::setName(string value)
{
    _name = value;
}

// A member function that sets the age of the animal.
void Animal::setAge(int value)
{
    _age = value;
}

// A member function that sets the weight of the animal.
void Animal::setWeight(double value)
{
    _weight = value;
}

// A member function that gets the id of the animal.
int Animal::getID()  const
{
    return _id;
}

// A member function that gets the ID of the animal.
void Animal::setID(int value)
{
    _id = value;
}

string Animal::getType() const
{
    return _type;
}

void Animal::setType(string value)
{
    _type = value;
}


