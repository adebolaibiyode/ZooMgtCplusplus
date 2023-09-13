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
* This is a derived class from Bird
*/

#include "Eagle.h"

//Default constructor
Eagle::Eagle(){

}

//The constructor of the Eagle class that initializes the key data members used for the Zoo Management program.
Eagle::Eagle(string name, string type, int age, double weight, int id):Bird(name,type,age,weight,id)
{
	cout << "\nEagles are birds\n";
}

//Default destructor
Eagle::~Eagle(){ }

// A  function that gets the habitat of an animal.
 void Eagle::getHabitat() {
	 cout << "\nEagles can be found in a wide range of habitats, including mountains, forests, tundras, and deserts worldwide.\n";
 }

// A  function that gets the diet of an animal.
 void Eagle::getDiet() { 
	 cout << "\nEagles primarily feed on fish, birds, small mammals, and carrion, depending on the species and habitat.\n";
 }

// A  function that gets the frequency of feeding of an animal.
 void Eagle::getFeedingFrequency() { 
	 cout << "\nEagles typically eat once daily, but this can vary based on the availability of prey and the specific needs of chicks during nesting season.\n";
 }

// A  function for the draw action of an animal.
 void Eagle::draw() const {
	 cout << "         __          " << endl;
	 cout << "    __  /  \\  __     " << endl;
	 cout << "    \\ \\/    \\/ /     " << endl;
	 cout << "     \\/  @ @ \\/      " << endl;
	 cout << "      (   \"   )       " << endl;
	 cout << "      \\~*.*~//       " << endl;
	 cout << "       //^\\\\         " << endl;
	 cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	 cout << "      SKY            " << endl;
	 cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
 }

// Overriding the makeSound function for Eagle
void Eagle::makeSound() { 
	cout << "\nEagles communicate using a series of calls and whistles, which can serve as mating calls, territorial warnings, or communications between mates and their offspring.\n";
}

//Member function peculiar to Eagles, output info on how they hunt from high
void Eagle::huntFromHigh(){
	cout << "\Though known as formidable hunters, eagles will also scavenge when the opportunity presents itself, consuming carrion."
		<< "Utilizing their keen eyesight, eagles soar high in the sky to spot and dive down on unsuspecting prey at remarkable speeds.\n";
}

//Member function peculiar to Eagles, output info on how they have sharp vision
void Eagle::sharpVision(){
	cout << "\nEagles possess exceptional vision, allowing them to spot prey from great distances, with some species having vision up to 4-8 times stronger than that of the average human.\n";		
}

//Member function peculiar to Eagles, output info on how they build high nests
void Eagle::buildHighNests(){
	cout << "\nEagles lay eggs in nests, commonly known as eyries, which they often build in high locations like cliffs or tall trees to ensure safety from predators.\n";
}