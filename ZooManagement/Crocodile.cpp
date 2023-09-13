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


#include "Crocodile.h"

//Default constructor
Crocodile::Crocodile(){ }

//The constructor of the Crocodile class that initializes the key data members used for the Zoo Management program.
Crocodile::Crocodile(string name, string type, int age, double weight, int id):Reptile(name,type,age,weight,id)
{ 
	cout << "\nCrocodiles are reptiles\n";
}

//Default destructor
Crocodile::~Crocodile(){ }

// A  function that gets the habitat of an animal.
 void Crocodile::getHabitat() { 
	 cout << "\nCrocodiles primarily inhabit freshwater habitats such as rivers, lakes, wetlands, and sometimes coastal brackish waters.\n";
 }

// A  function that gets the diet of an animal.
 void Crocodile::getDiet() {
	 cout << "\nCrocodiles are carnivorous predators, feeding on fish, birds, mammals, and occasionally smaller crocodiles, depending on their size and habitat.\n";
 }

// A  function that gets the frequency of feeding of an animal.
 void Crocodile::getFeedingFrequency() {
	 cout << "\nWhile crocodiles can survive long periods without food, when they do eat, they can consume large amounts and may only feed once a week or even less frequently.\n";
 }

// A  function for the draw action of an animal.
 void Crocodile::draw() const { 
	 cout << "             _  _" << endl;
	 cout << "   _________\\ \\/ /" << endl;
	 cout << "  / ________ \\  /" << endl;
	 cout << " / /       \\ \\/" << endl;
	 cout << "/ /      ~  \\/     " << endl;
	 cout << "\\ \\         /" << endl;
	 cout << " \\ \\_______/" << endl;
	 cout << "  \\________\\" << endl;
	 cout << "           '--`-._" << endl;
	 cout << "                 `\\_" << endl;
 }

// Overriding the move function because crocodiles can swim
void Crocodile::move() { 
	cout << "\nCrocodiles move in a variety of ways: they swim using their powerful tails, walk on land with a sprawling gait, and can gallop or bound rapidly in short bursts when necessary.\n";
}

// Overriding the makeSound function for Crocodile
void Crocodile::makeSound() {
	cout << "\nCrocodiles communicate through a series of growls, hisses, and bellows, with some species also producing distinctive ""water dance"" displays during vocalizations.\n";
}

//Member function peculiar to Crocodile, output info on how they ambush preys
void Crocodile::ambushPrey(){ 
	cout << "\nKnown for their stealth, crocodiles often ambush their prey by waiting submerged near the water's edge and lunging suddenly when the opportunity arises.\n";
}

//Member function peculiar to Crocodile, output info on how they have strong jaw bite
void Crocodile::strongJawBite(){ 
	cout << "\nBoasting one of the most powerful bites in the animal kingdom, a crocodile's jaws can snap shut with incredible force, holding their prey securely.\n";
}

//Member function peculiar to Crocodile, output info on how they build nests
void Crocodile::buildNests(){ 
	cout << "\nFemale crocodiles lay their eggs in nests made from vegetation or in sandy banks, which they guard diligently until hatching."
		<< "\nCrocodiles build nests using vegetation, mud, and sand, often locating them near the water's edge, where the female meticulously arranges materials and digs a hole to lay her eggs before covering them to maintain warmth and protection.\n";
}