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

#include "Snake.h"

//Default constructor
Snake::Snake()
{ }

//The constructor of the Snake class that initializes the key data members used for the Zoo Management program.
Snake::Snake(string name, string type, int age, double weight, int id)
	:Reptile(name,type,age,weight,id)
{ 
	cout << "Snakes are reptiles\n";
}

//Default destructor
Snake::~Snake()
{ }

// A  function that gets the habitat of an animal.
 void Snake::getHabitat() 
 {
	 cout  << "\nSnakes inhabit a diverse range of environments, from deserts and forests to lakes and mountains, adjusting to varying climates and terrains.\n";
 }

// A  function that gets the diet of an animal.
 void Snake::getDiet() 
 {
	 cout << "\nThe diet of snakes varies widely, from small mammals, birds, and amphibians to other reptiles and even insects, depending on the species.\n";
 }

// A  function that gets the frequency of feeding of an animal.
 void Snake::getFeedingFrequency() 
 { 
	 cout << "\nDepending on the size and species, snakes might feed as often as daily or as infrequently as once a month.\n";
 }

// A  function for the draw action of an animal.
 void Snake::draw() const 
 {
	 cout << "    -----" << endl;
	 cout << "   /     \\" << endl;
	 cout << "  / /~  ~ \\" << endl;
	 cout << " / / / <=== Snake's head" << endl;
	 cout << "/   /     \\" << endl;
	 cout << "\   -----" << endl;
 }

// function, output movement info on reptiles
 void Snake::move() 
 {
	 cout << "\nUsing specialized belly scales, snakes employ several locomotion methods, including sidewinding, concertina movement, and rectilinear progression.\n";
 }

// function, output how reptiles lay eggs
 void Snake::layEggs() 
 { 
	 cout << "\nWhile many snakes lay eggs in hidden or sheltered locations, some species give birth to live young.\n";
 }

// function, output how reptiles make sound
 void Snake::makeSound() 
 {
	 cout << "\nSnakes lack vocal cords but can produce hisses by forcibly expelling air through their glottis, while some species might also use other methods like rattling or growling for communication or warning.\n";
 }

// function, output how reptiles sunbathe
 void Snake::sunbathe() 
 { 
	 cout << "\nTo regulate their body temperature, snakes will often bask in the sun, absorbing its warmth, especially after a meal or during cooler days.\n";
 }

// function, output how reptiles shed skin
 void Snake::shedSkin() 
 { 
	 cout << "\nSnakes periodically shed their skin in a process called ecdysis, allowing for growth and removing parasites.\n";
 }

// Peculiar function for Snake
void Snake::slither()
{
	cout << "\nSlithering, the most common form of snake locomotion, involves the snake propelling itself forward by pushing off objects and making serpentine movements.\n";
}