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
#ifndef ANIMAH_H
#define ANIMAH_H

#include <string>

using std::string;
class Animal
{
public:

    //default constructor
    Animal();
      /*
      * The constructor of the Animal class that initializes the key data members used for the Zoo Management program.
      * It takes 5 input parameters for the Name,Type,Age, Weight and Animal ID.
      */
    Animal(string name, string type, int age,double weight, int id);

    //Default destructor
    ~Animal();

    // A member function that gets the name of the animal.
    string getName() const;

    // A member function that gets the age of the animal.
    int getAge();

    // A member function that gets the wight of the animal.
    double getWeight();

    // A member function that sets the name of the animal.
    void setName(string value);

    // A member function that sets the age of the animal.
    void setAge(int value);

    // A member function that sets the weight of the animal.
    void setWeight(double value);

    // A member function that gets the id of the animal.
    int getID() const ;

    // A member function that gets the ID of the animal.
    void setID(int value);

    // A member function that gets the type of the animal.
    string getType() const;

    // A member function that gets the type of the animal.
    void setType(string value);

    // A virtual function for the makeSound action of an animal.
    virtual void makeSound() = 0;

    // A virtual function that gets the habitat of an animal.
    virtual void getHabitat() = 0;

    // A virtual function that gets the diet of an animal.
    virtual void getDiet() = 0;

    // A virtual function that gets the frequency of feeding of an animal.
    virtual void getFeedingFrequency() = 0;

    // A virtual function for the draw action of an animal.
    virtual void draw() const = 0;

private:
    string _name;
    string _type;
    int _age;
    double _weight;
    int _id;
};
#endif
