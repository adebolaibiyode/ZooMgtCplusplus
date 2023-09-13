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

#include "Alligator.h"

//Default constructor
Alligator::Alligator(){ }

//The constructor of the Alligator class that initializes the key data members used for the Zoo Management program.
Alligator::Alligator(string name, string type, int age, double weight, int id)
	:Reptile(name,type,age,weight,id)
{ 
	cout << "Aligators are reptiles.\n"
		<< "Though alligators and crocodiles are similar and both belong to the order Crocodylia, they have distinct differences, such as snout shape and habitat preferences.\n";
}

//Default destructor
Alligator::~Alligator(){ }

// A  function that gets the habitat of an animal.
 void Alligator::getHabitat() {
	 cout << "\nAlligators primarily inhabit freshwater wetlands such as swamps, marshes, and rivers in the southeastern US and parts of China.\n";
 }

// A  function that gets the diet of an animal.
 void Alligator::getDiet() {
	 cout << "\nAlligators are opportunistic carnivores, feeding on fish, amphibians, birds, mammals, and other reptiles.\n";
 }

// A  function that gets the frequency of feeding of an animal.
 void Alligator::getFeedingFrequency() { 
	 cout << "\nWhile alligators can feed frequently when food is abundant, their feeding can become infrequent, especially during colder months.\n";
 }

// A  function for the draw action of an animal.
 void Alligator::draw() const {
	 cout << "        ,--./,-." << endl;
	 cout << "   /---/  @     \\" << endl;
	 cout << "  |   |            |" << endl;
	 cout << "   \\__\\          /" << endl;
	 cout << "       '--\\__/'   <=== Alligator's head" << endl;
 }

// function, output how reptiles lay eggs
 void Alligator::layEggs(){
	 cout << "\nFemale alligators lay their eggs in mounded nests made of vegetation, mud, and sticks, which generate heat as the vegetation decays, aiding in incubation.\n";
 }

// function, output how reptiles make sound
 void Alligator::makeSound() {
	 cout << "\nAlligators produce a variety of sounds, including growls, hisses, and bellows, often used for communication, mating calls, and establishing territory.\n";
 }

// Peculiar function for Alligator
void Alligator::swim(){
	cout << "\nOn land, alligators move with a sprawling walk, but they can also run in short bursts, while in water, they are agile and efficient swimmers.\n"
		<< "In the water, alligators propel themselves primarily using their powerful, muscular tails, moving with both grace and speed.\n";
}