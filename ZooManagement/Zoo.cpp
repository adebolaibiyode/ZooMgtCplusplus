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
#include "Zoo.h"


//Default constructor to initialize the Zoo object
Zoo::Zoo()
{

}

//A member function takes a reference to a Animal object - pasing by reference, preventing making copies of the Animal object.
   //Also ensuring the Animal object cannot be modified in this function  - using the const keyword.
void Zoo::addAnimal(Animal* animal)
{
	_animals.push_back(animal);
	_animalIds[_currentId++] = animal->getID();
}

//A member function to set the animal member data
vector<Animal* > Zoo::getAnimals() 
{
	return _animals;
}

//A member function that returns a pointer to a Book object. 
//If the animal is not found at the address the function would return a nullptr (inidcating no address).
//Finally, the function expects a reference to the string object representing the name of the animal, with the const keyword to disallow modification.
Animal* Zoo::searchByName(const string& name)
{
	//range-based For loop
	for (auto& animal : _animals)
	{
		if (animal->getName() == name)
		{
			return animal;
		}
	}
	return nullptr;
}

void Zoo::draw() const
{
    cout << "____________________________________________________" << endl;
    cout << "|          Weissman ZOO ENTRANCE                    |" << endl;
    cout << "|   _______      _______       _______              |" << endl;
    cout << "|  |       |    |       |     |       |             |" << endl;
    cout << "|  | Lions |    | Goril.|     |Ostrich|             |" << endl;
    cout << "|  |_______|    |_______|     |_______|             |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|   _______      _______       _______              |" << endl;
    cout << "|  |       |    |       |     |       |             |" << endl;
    cout << "|  | Eleph.|    | Tigers|     |Monkeys|             |" << endl;
    cout << "|  |_______|    |_______|     |_______|             |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|             ~~~~~~~~~~~~                          |" << endl;
    cout << "|             ~   Pond   ~                          |" << endl;
    cout << "|             ~~~~~~~~~~~~                          |" << endl;
    cout << "|___________________________________________________|" << endl;
}

