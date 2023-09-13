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
* This is a derived class from BIRD.
*/

#include "Ostrich.h"

//Default constructor
Ostrich::Ostrich(){ }

//The constructor of the Ostrich class that initializes the key data members used for the Zoo Management program.
Ostrich::Ostrich(string name, string type, int age, double weight, int id):Bird(name,type,age, weight,id)
{ 
    cout << "\nOstrich are birds\n";
}

//Default destructor
Ostrich::~Ostrich(){ }

// A  function that gets the habitat of an animal.
 void Ostrich::getHabitat() {
	 cout << "\nOstriches primarily inhabit the open savannas, grasslands, and desert regions of Africa.\n";
 }

// A  function that gets the diet of an animal.
 void Ostrich::getDiet() {
	 cout << "\nOstriches are omnivores, consuming a diet of seeds, shrubs, grasses, fruits, and occasionally insects and small vertebrates.\n";
 }

// A  function that gets the frequency of feeding of an animal.
 void Ostrich::getFeedingFrequency() { 
	 cout << "\nOstriches graze and forage for food throughout the day, much like herbivorous mammals.\n";
 }

// A  function for the draw action of an animal.
 void Ostrich::draw() const {
     // Ostrich
     cout << "  ,--./,-." << endl;
     cout << " / #      \\" << endl;
     cout << "|          |     <-- Ostrich" << endl;
     cout << " \\        /" << endl;
     cout << "  `._,._,`" << endl;
     cout << "    ||  || " << endl;
     cout << "    ||  || " << endl;
     cout << "    ||  || " << endl;
     cout << "    /\  /\ " << endl;

     // Space
     cout << endl << endl;

     // Egg in a hole
     cout << "   ______" << endl;
     cout << "  / (  )   \\" << endl;
     cout << " /  (  )    \\    <-- Egg" << endl;
     cout << " \\________/" << endl;
     cout << "  \\|  |  |/" << endl;
     cout << "   '  '  '     <-- Hole" << endl;
 }

// Overriding the fly function because ostriches can't fly
void Ostrich::fly() { 
	cout << "\nOstriches are flightless birds, possessing small wings relative to their body size and lacking the breast muscles required for flight.\n";
}

// Overriding the makeSound function for Ostrich
void Ostrich::makeSound() { 
	cout << "\nOstriches communicate through a variety of sounds, including a deep booming call used by males during mating displays and to assert dominance.\n";
}

//Member function peculiar to Ostrich, output info on how they dig holed for eggs
void Ostrich::digHolesForEggs(){
	cout << "\nFemale ostriches lay their large eggs in communal nests, which are essentially pits in the ground dug by males.\n";
}

//Member function peculiar to Ostrich, output info on how they are fast at running
void Ostrich::runFast(){
	cout << "\nKnown as the world's fastest bird on land, ostriches can reach speeds of up to 45 mph (72 km/h) when running.\n";
}