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
* This is a derived class from Mammal
*/


#include "Ape.h"


//Default constructor
Ape::Ape() {}

//The constructor of the Ape class that initializes the key data members used for the Zoo Management program.
Ape::Ape(string name, string type, int age, double weight, int id)
	:Mammal(name, type, age, weight, id)
{
	cout << "\nApes are Mammals.\n";
}

//Default destructor
Ape::~Ape() {}

// A  function that gets the habitat of an animal.
void Ape::getHabitat()
{
}

// A  function that gets the diet of an animal.
 void Ape::getDiet() {
	 cout << "\nApes, including gorillas, chimpanzees, and orangutans, are omnivorous, but their diet largely consists of fruits, leaves, seeds, and occasionally insects or small animals. \n";
 }

// A  function that gets the frequency of feeding of an animal.
 void Ape::getFeedingFrequency() 
 {
	 cout << "\nApes generally feed throughout the day, with their activity patterns being diurnal, focusing on foraging during daylight hours. \n";
 }

// A  function for the draw action of an animal.
 void Ape::draw() const {
	  cout << "    __.--'\\      " <<  endl;
	  cout << "  .'.-.-   \\     " <<  endl;
	  cout << " // .'     '.-.  " <<  endl;
	  cout << "||  /  o      o\\ " <<  endl;
	  cout << "|||     \\   .-'  " <<  endl;
	  cout << "|||    / / --`/  " <<  endl;
	  cout << "|| \\  .'      |  " <<  endl;
	  cout << " \\ `'`       /  " <<  endl;
	  cout << "  '-'       '-'  " <<  endl;
 }

// Overriding the giveBirth function to indicate the typical longer development of ape offspring
void Ape::giveBirth() {
	cout << "\nFemale apes typically give birth to one offspring at a time, after a species-specific gestation period, and have extended periods of parental care. \n";
}

// Overriding the growHair function to highlight the hair pattern of apes
void Ape::growHair() {
	cout << "\nApes possess dense hair coverage, varying in length and color, providing them insulation, protection, and aiding in species and age identification. \n";
}

// Overriding the makeSound function to specify typical ape sounds
void Ape::makeSound() {
	cout << "\nApes communicate through a rich array of vocalizations, gestures, and facial expressions, each carrying different meanings related to emotions, warnings, and social signals. \n";
}

// Member function peculiar to apes, output info on how apes use tools to sort out food
void Ape::useTools() {
	cout << "\nCertain apes, notably chimpanzees, demonstrate remarkable tool use, employing sticks, leaves, and stones for various tasks such as extracting termites or cracking nuts. \n";
}
//Member function peculiar to Ape, output info on how apes walk upright
void Ape::walkUpright() {
	cout << "\nWhile all apes can walk on two legs for short distances, it's most pronounced in bonobos and chimpanzees; however, they primarily use a form of quadrupedal knuckle-walking. \n";
}

// Member function peculiar to apes, output info on how apes like to socialize
void Ape::socialize() {
	cout << "\nApes are social animals with complex interactions, forming groups with hierarchies, alliances, friendships, and even exhibiting cultural behaviors in tool use and grooming. \n";
}
