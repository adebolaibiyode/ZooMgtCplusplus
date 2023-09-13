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
* This is a derived class from WILDCAT
*/

#include "Hyena.h"


//Default constructor
Hyena::Hyena(){ }

//The constructor of the Hyena class that initializes the key data members used for the Zoo Management program.
Hyena::Hyena(string name, string type, int age, double weight, int id)
	:WildCat(name,type,age,weight,id)
{ 
	cout << "Hyenas are wild cats.\n";
}

//Default destructor
Hyena::~Hyena(){ }

// A  function that gets the habitat of an animal.
 void Hyena::getHabitat() {
	 cout << "\nHyenas inhabit a range of ecosystems, from grasslands and savannas to woodlands and deserts in Africa and parts of Asia.\n";
 }

// A  function that gets the diet of an animal.
 void Hyena::getDiet() {
	 cout << "\nHyenas, particularly spotted hyenas, have a varied diet that includes both hunting prey and scavenging, consuming animals of various sizes.\n";
 }

// A  function that gets the frequency of feeding of an animal.
 void  Hyena::getFeedingFrequency() {
	 cout << "\nWhile hyenas can eat daily when food is abundant, their feeding frequency can vary greatly depending on the availability of food sources.\n";
 }

// A  function for the draw action of an animal.
 void Hyena::draw() const { 
	 cout << "    /\\_   _/\\     /\\_   _/\\" << endl;
	 cout << "   / o o\\ / o o\\  / o o\\ / o o\\" << endl;
	 cout << "  ( >  \" < ) > \" <) ( >  \" < ) > \" <)" << endl;
	 cout << "   \\~*.*~//~*.*~\\  \\~*.*~//~*.*~\\" << endl;
	 cout << "    {     }{     }   {     }{     }" << endl;
 }

// Overriding the growHair function for Hyena to represent its coarse fur
void Hyena::growHair() {
	cout << "\nHyenas have coarse fur that ranges in color from tawny to brown, often with patterns of spots or stripes, depending on the species.\n";
}

// Overriding the makeSound function for Hyena
void Hyena::makeSound() { 
	cout << "\nHyenas communicate through a variety of vocalizations, with the spotted hyena being famous for its eerie ""laugh"",  which can convey excitement, nervousness, or communicate with clan members.\n";
}

//Member function peculiar to Hyenas, output info on how hyenas are  good scavengers
void Hyena::scavenge(){
	cout << "\nHyenas are skilled scavengers, often consuming remains left by other predators, and can drive off larger carnivores from their kills.\n";
}

//Member function peculiar to hyenas, output info on how hyenas hunt in groups
void Hyena::huntInGroups(){
	cout << "\nWhile spotted hyenas are known to hunt cooperatively in groups, especially for larger prey, not all hyena species display this behavior.\n";
}

//Member function peculiar to hyenas, output info on how hyenas crush bones
void Hyena::crushBones(){
	cout << "\nWith incredibly strong jaws, hyenas can crush and consume bones, often digesting them completely.\n";
}