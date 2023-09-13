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
* This is a derived class from BIRD
*/

#include "Parrot.h"

//Default constructor
Parrot::Parrot(){ }

//The constructor of the Parrot class that initializes the key data members used for the Zoo Management program.
Parrot::Parrot(string name, string type, int age, double weight, int id):Bird(name,type,age,weight,id)
{
    cout << "\nParrots are birds\n";
}

//Default destructor
Parrot::~Parrot(){ }

// A  function that gets the habitat of an animal.
 void Parrot::getHabitat() {
	 cout << "\nParrots inhabit a range of environments, primarily tropical and subtropical forests, but also savannas, mangroves, and even some arid regions.\n";
 }

// A  function that gets the diet of an animal.
 void Parrot::getDiet() { 
	 cout << "\nThe diet of parrots consists mainly of fruits, seeds, nuts, flowers, and nectar, though some species may consume insects or small animals.\n";
 }

// A  function that gets the frequency of feeding of an animal.
 void Parrot::getFeedingFrequency() {
	 cout << "\nParrots typically feed multiple times throughout the day, adjusting their feeding schedule to the availability of food.\n";
 }

// A  function for the draw action of an animal.
 void Parrot::draw() const {
     cout << "+--------------+" << endl;
     cout << "|              |" << endl;
     cout << "|    ,--./,--. |" << endl;
     cout << "|   / #    # \\|" << endl;
     cout << "|   \\       /  <-- Parrot" << endl;
     cout << "|    `-----'   |" << endl;
     cout << "|      |  |      |" << endl;
     cout << "|      ~  ~     |" << endl;
     cout << "|              |" << endl;
     cout << "+--------------+" << endl;
     cout << "      ||  ||     <-- Cage Stand" << endl;
     cout << "      ''  ''    " << endl;
 }

// Overriding the fly function to give a more specific description for Parrots
void Parrot::fly() { 
	cout << "\nEquipped with strong wing muscles and a streamlined body, parrots are agile fliers, often navigating dense forests with ease.\n";
}

// Overriding the makeSound function for Parrot
void Parrot::makeSound() {
	cout << "\nParrots produce a diverse range of vocalizations, from melodic whistles to intricate calls, used for communication, attracting mates, and expressing emotions.\n";
}

// Overriding the layEggs function to give a more specific description for Parrots
void Parrot::layEggs() {
	cout << "\nParrots lay their eggs in nests, which are frequently located in tree hollows or crevices, providing protection for their offspring.\n";
}

//Member function peculiar to Parrots, output info on how parrots mimic human voices
void Parrot::mimicSounds(){
	cout << "\nKnown for their impressive cognitive abilities, many parrot species can mimic a wide array of sounds, including human voices, with astonishing accuracy.\n";
}

//Member function peculiar to Parrots, output info on how parrtots perch on shoulders
void Parrot::perchOnShoulders(){ 
	cout << "\nWhile many pet parrots can be trained to perch on shoulders, doing so requires trust and positive reinforcement between the bird and the handler.\n";
}