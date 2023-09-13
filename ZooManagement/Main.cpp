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
*/

#include <iostream>
#include "Animal.h"
#include "Zoo.h"
#include "Ape.h"
#include "Bird.h"
#include "Crocodile.h"
#include "Eagle.h"
#include "Elephant.h"
#include "Gorilla.h"
#include "Hyena.h"
#include "Jaguar.h"
#include "Lion.h"
#include "Mammal.h"
#include "Monkey.h"
#include "Ostrich.h"
#include "Parrot.h"
#include "Reptile.h"
#include "Tiger.h"
#include "WildCat.h"
#include "Alligator.h"
#include "Snake.h"
#include <sstream>
#include <algorithm>  // for std::transform
#include <cctype>     // for std::tolower


using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
using std::numeric_limits;
using std::streamsize;
using std::stoi;


// Helper function to convert a string to lowercase
string toLowerCase(const string& str) {
    string result = str;
    std::transform(result.begin(), result.end(), result.begin(),
        [](unsigned char c) { return std::tolower(c); });
    return result;
}

// Helper function to check if string is a valid number
bool isValidNumber(const string& s) 
{
    std::istringstream iss(s);

    // Try to read as a double first (covers both integer and floating point).
    double d;
    iss >> d;

    // If reading was successful and we've consumed the entire string, it's valid.
    return !(iss.fail() || iss.rdbuf()->in_avail() != 0);
}


int main()
{

    Zoo zoo;

    int numberOfAnimals = 0;

    // Prompt user for input
    cout << "Welcome to the Zoo Management program. This application will allow users to: ";
    cout << endl << endl;
    cout << " - Add a new animal to the zoo";
    cout << endl << endl;
    cout << " - Display all the animals in the zoo";
    cout << endl << endl;
    cout << " - Search for a animal by name";
    cout << endl << endl;
    cout << " - You will be prompted to enter the number of animals you will like to add to your zoo. Only valid whole numbers allowed!";
    cout << endl << endl;
    cout << "############################################################################################################################";
    cout << endl << endl;

    string asknumberOfAnimals = "Enter the number of animals to add to your zoo:";

    cout << asknumberOfAnimals;
    while (!(cin >> numberOfAnimals)) {
        // Inform the user of the error
        cout << "Invalid input. Enter a digit. ";

        // Clear the error flag on cin so that future I/O operations work correctly
        cin.clear();

        // Ignore invalid input up to the next newline or end of file
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    // This is the added line to consume the leftover newline
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "################### Thank you. Your zoo will take " << numberOfAnimals << " animal(s). #############################################################\n";
    zoo.draw();
    cout << endl << endl;

   
    // Add animals
    for (int i = 1; i <= numberOfAnimals; ++i)
    {
        string name;
        string type;
        int age;
        double weight;
        string inputedWeight;

        cout << "Enter name of animal " << (i) << ": ";
        getline(cin, name);

        cout << "Enter the type of animal - Choose from the list  below:\n " <<
           " (Alligator, Crocodile, Eagle, Elephant, Gorilla, Hyena, Jaguar, Lion, Monkey, Ostrich, Parrot, Snake, Tiger)\n:  ";
        getline(cin, type);

        cout << "Enter the age:";
        while (!(cin >> age)) 
        {
            // Inform the user of the error
            cout << "Invalid input. Enter a digit. ";

            // Clear the error flag on cin so that future I/O operations work correctly
            cin.clear();

            // Ignore invalid input up to the next newline or end of file
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        // This is the added line to consume the leftover newline
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Weight: ";
        getline(cin, inputedWeight);

        while (!isValidNumber(inputedWeight)) {
            // Inform the user of the error
            cout << "Invalid input. Enter a digit: ";

            // Clear the error flag on cin so that future I/O operations work correctly
            cin.clear();

            // Ignore invalid input up to the next newline or end of file
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            // Re-read the input
            getline(cin, inputedWeight);
        }

        // If you want to use the weight as a double
        weight = stod(inputedWeight);        

        if (toLowerCase(type) == "crocodile")
        {         
            // Create a animal and add to the zoo
            Crocodile* crocodilePtr = new Crocodile(name, type, age, weight, i);
            zoo.addAnimal(crocodilePtr);
        }
        else   if (toLowerCase(type) == "alligator")
        {
            // Create a animal and add to the zoo
            Alligator* alligatorPtr = new Alligator(name, type, age, weight, i);
            zoo.addAnimal(alligatorPtr);
        }
        else   if (toLowerCase(type) == "snake")
        {
            // Create a animal and add to the zoo
            Snake* snakePtr = new Snake(name, type, age, weight, i);
            zoo.addAnimal(snakePtr);
        }
        else if (toLowerCase(type) == "ostrich")
        {
            // Create a animal and add to the zoo
            Ostrich* ostrichPtr = new Ostrich(name, type, age, weight, i);;
            zoo.addAnimal(ostrichPtr);
        }
        else if (type == "jaguar") 
        {            
            // Create a animal and add to the zoo           
            Jaguar* jaguarPtr = new  Jaguar(name, type, age, weight, i);          
            zoo.addAnimal(jaguarPtr);
        }
        else if (toLowerCase(type) == "parrot")
        {           
            // Create a animal and add to the zoo            
            Parrot* parrotPtr = new Parrot(name, type, age, weight, i);           
            zoo.addAnimal(parrotPtr);
        }
        else if (toLowerCase(type) == "tiger")
        {            
            // Create a animal and add to the zoo            T
            Tiger* tigerPtr = new Tiger(name, type, age, weight, i);           
            zoo.addAnimal(tigerPtr);
        }
        else if (toLowerCase(type) == "monkey")
        {
            // Create a animal and add to the zoo            
            Monkey* monkeyPtr = new Monkey(name, type, age, weight, i);            
            zoo.addAnimal(monkeyPtr);
        }
        else if (toLowerCase(type) == "lion")
        {           
            // Create a animal and add to the zoo
            Lion* lionPtr = new Lion(name, type, age, weight, i);
            zoo.addAnimal(lionPtr);
        }
        else if (toLowerCase(type) == "elephant")
        {            
            // Create a animal and add to the zoo
            Elephant* elephantPtr = new Elephant(name, type, age, weight, i);
            zoo.addAnimal(elephantPtr);
        }
        else if (toLowerCase(type) == "eagle")
        {            
            // Create a animal and add to the zoo
            Eagle* eaglePtr = new  Eagle(name, type, age, weight, i);
            zoo.addAnimal(eaglePtr);
        }
        else if (toLowerCase(type) == "gorilla")
        {            
            // Create a animal and add to the zoo
            Gorilla* gorillaPtr = new Gorilla(name, type, age, weight, i);
            zoo.addAnimal(gorillaPtr);
        }
        else if (toLowerCase(type) == "hyena")
        {            
            // Create a animal and add to the zoo
            Hyena* hyenaPtr = new Hyena(name, type, age, weight, i);
            zoo.addAnimal(hyenaPtr);
        }
        else 
        {            
            //Not an animal we keep
        }    
        cout << "\n";
    }

    // Display all animals using range-based for loop
    cout << "List of Animals in the Zoo:" << endl;
    cout << "------------------------------------";
    cout << endl;

    for (const auto& animal : zoo.getAnimals())
    {
        cout << animal->getID() << ": " << animal->getName() << ", Type: "  << animal->getType()
            << ", Age: " << animal->getAge() << ", Weight: " << animal->getWeight() << endl;
        animal->draw();
        cout << "############################################################################################################################";
        cout << endl << endl;
    }

    // Search for an animal by name (pass name by value)
    string nameToSearch;
    do
    {
        cout << "\nEnter name(case-sensitive) to search (or press Enter to quit): ";
        getline(cin, nameToSearch);

        if (!nameToSearch.empty())
        {
            Animal* foundanimal = zoo.searchByName(nameToSearch);
            if (foundanimal)
            {
                cout << "Animal found! ID: " << foundanimal->getID() << ", Name: " << foundanimal->getName()
                    << "\n" << foundanimal->getName() << " is a/an " << foundanimal->getType() << endl;

                if (toLowerCase(foundanimal->getType()) == "crocodile")
                {
                    Crocodile* myCrocodile = dynamic_cast<Crocodile*>(foundanimal);

                    if (myCrocodile != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Crocodile
                        // you can now use myCrocodile as a pointer to Crocodile
                        myCrocodile->draw();
                        cout << "Age: " << myCrocodile->getAge();
                        cout << ", Weight: " << myCrocodile->getWeight();
                        cout << "\n\n What is their diet :";
                        myCrocodile->getDiet();
                        cout << "\n How often do they feed :";
                        myCrocodile->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myCrocodile->getHabitat();
                        cout << "\n Other facts :";
                        myCrocodile->buildNests();
                        myCrocodile->ambushPrey();
                        myCrocodile->strongJawBite();
                        myCrocodile->move();
                        myCrocodile->makeSound();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Crocodile\n";
                    }

                }
                else if (toLowerCase(foundanimal->getType()) == "alligator")
                {
                    Alligator* myAlligator = dynamic_cast<Alligator*>(foundanimal);

                    if (myAlligator != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a alligator
                        // you can now use myAlligator as a pointer to alligator
                        myAlligator->draw();
                        cout << "Age: " << myAlligator->getAge();
                        cout << ", Weight: " << myAlligator->getWeight();
                        cout << "\n\n What is their diet :";
                        myAlligator->getDiet();
                        cout << "\n How often do they feed :";
                        myAlligator->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myAlligator->getHabitat();
                        cout << "\n Other facts :";
                        myAlligator->layEggs();
                        myAlligator->swim();
                        myAlligator->move();
                        myAlligator->makeSound();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Alligator\n";
                    }

                }
                else  if (toLowerCase(foundanimal->getType()) == "snake")
                {
                    Snake* mySnake = dynamic_cast<Snake*>(foundanimal);

                    if (mySnake != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Snake
                        // you can now use mySnake as a pointer to Snake
                        mySnake->draw();
                        cout << "Age: " << mySnake->getAge();
                        cout << ", Weight: " << mySnake->getWeight();
                        cout << "\n\n What is their diet :";
                        mySnake->getDiet();
                        cout << "\n How often do they feed :";
                        mySnake->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        mySnake->getHabitat();
                        cout << "\n Other facts :";
                        mySnake->sunbathe();
                        mySnake->shedSkin();
                        mySnake->move();
                        mySnake->slither();
                        mySnake->makeSound();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Snake\n";
                    }

                }
                else if (toLowerCase(foundanimal->getType()) == "ostrich")
                {
                    Ostrich* myOstrich = dynamic_cast<Ostrich*>(foundanimal);
                    if (myOstrich != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Ostrich
                        // you can now use myOstrich as a pointer to Ostrich
                        myOstrich->draw();
                        cout << "Age: " << myOstrich->getAge();
                        cout << ", Weight: " << myOstrich->getWeight();
                        cout << "\n\n What is their diet :";
                        myOstrich->getDiet();
                        cout << "\n How often do they feed :";
                        myOstrich->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myOstrich->getHabitat();
                        cout << "\n Other facts :";
                        myOstrich->fly();
                        myOstrich->runFast();
                        myOstrich->digHolesForEggs();
                        myOstrich->makeSound();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to an Ostrich\n";
                    }
                }
                else if (toLowerCase(foundanimal->getType()) == "jaguar")
                {
                    Jaguar* myJaguar = dynamic_cast<Jaguar*>(foundanimal);
                    if (myJaguar != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Ostrich
                        // you can now use myJaguar as a pointer to Ostrich
                        myJaguar->draw();
                        cout << "Age: " << myJaguar->getAge();
                        cout << ", Weight: " << myJaguar->getWeight();
                        cout << "\n\n What is their diet :";
                        myJaguar->getDiet();
                        cout << "\n How often do they feed :";
                        myJaguar->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myJaguar->getHabitat();
                        cout << "\n Other facts :";
                        myJaguar->ambushPrey();
                        myJaguar->climbTrees();
                        myJaguar->makeSound();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Jaguar\n";
                    }
                }
                else if (toLowerCase(foundanimal->getType()) == "parrot")
                {
                    Parrot* myParrot = dynamic_cast<Parrot*>(foundanimal);
                    if (myParrot != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Parrot
                        // you can now use myParrot as a pointer to Parrot
                        myParrot->draw();
                        cout << "Age: " << myParrot->getAge();
                        cout << ", Weight: " << myParrot->getWeight();
                        cout << "\n\n What is their diet :";
                        myParrot->getDiet();
                        cout << "\n How often do they feed :";
                        myParrot->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myParrot->getHabitat();
                        cout << "\n Other facts :";
                        myParrot->fly();
                        myParrot->layEggs();
                        myParrot->mimicSounds();
                        myParrot->makeSound();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Parrot\n";
                    }
                }
                else if (toLowerCase(foundanimal->getType()) == "tiger")
                {
                    Tiger* myTiger = dynamic_cast<Tiger*>(foundanimal);
                    if (myTiger != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Tiger
                        // you can now use myTiger as a pointer to Tiger
                        myTiger->draw();
                        cout << "Age: " << myTiger->getAge();
                        cout << ", Weight: " << myTiger->getWeight();
                        cout << "\n\n What is their diet :";
                        myTiger->getDiet();
                        cout << "\n How often do they feed :";
                        myTiger->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myTiger->getHabitat();
                        cout << "\n Other facts :";
                        myTiger->giveBirth();
                        myTiger->solitaryHunt();
                        myTiger->swim();
                        myTiger->stalkPrey();
                        myTiger->sharpenClaws();
                        myTiger->markTerritory();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Tiger\n";
                    }
                }
                else if (toLowerCase(foundanimal->getType()) == "monkey")
                {
                    Monkey* myMonkey = dynamic_cast<Monkey*>(foundanimal);
                    if (myMonkey != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Monkey
                        // you can now use myMonkey as a pointer to Monkey
                        myMonkey->draw();
                        cout << "Age: " << myMonkey->getAge();
                        cout << ", Weight: " << myMonkey->getWeight();
                        cout << "\n\n What is their diet :";
                        myMonkey->getDiet();
                        cout << "\n How often do they feed :";
                        myMonkey->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myMonkey->getHabitat();
                        cout << "\n Other facts :";
                        myMonkey->swingOnBranches();
                        myMonkey->forage();
                        myMonkey->giveBirth();
                        myMonkey->growHair();
                        myMonkey->useTools();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Monkey\n";
                    }
                }
                else if (toLowerCase(foundanimal->getType()) == "lion")
                {
                    Lion* myLion = dynamic_cast<Lion*>(foundanimal);
                    if (myLion != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Lion
                        // you can now use myLion as a pointer to Lion
                        myLion->draw();
                        cout << "Age: " << myLion->getAge();
                        cout << ", Weight: " << myLion->getWeight();
                        cout << "\n\n What is their diet :";
                        myLion->getDiet();
                        cout << "\n How often do they feed :";
                        myLion->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myLion->getHabitat();
                        cout << "\n Other facts :";
                        myLion->makeSound();
                        myLion->liveInPride();
                        myLion->scavenge();
                        myLion->markTerritory();
                        myLion->sharpenClaws();
                        myLion->stalkPrey();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Lion\n";
                    }
                }
                else if (toLowerCase(foundanimal->getType()) == "elephant")
                {
                    Elephant* myElephant = dynamic_cast<Elephant*>(foundanimal);
                    if (myElephant != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Elephant
                        // you can now use myElephant as a pointer to Elephant
                        myElephant->draw();
                        cout << "Age: " << myElephant->getAge();
                        cout << ", Weight: " << myElephant->getWeight();
                        cout << "\n\n What is their diet :";
                        myElephant->getDiet();
                        cout << "\n How often do they feed :";
                        myElephant->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myElephant->getHabitat();
                        cout << "\n Other facts :";
                        myElephant->growHair();
                        myElephant->giveBirth();
                        myElephant->haveTusks();
                        myElephant->useTrunk();
                        myElephant->makeSound();
                        myElephant->makeSound();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Elephant\n";
                    }
                }
                else if (toLowerCase(foundanimal->getType()) == "eagle")
                {
                    Eagle* myEagle = dynamic_cast<Eagle*>(foundanimal);
                    if (myEagle != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Eagle
                        // you can now use myEagle as a pointer to Eagle
                        myEagle->draw();
                        cout << "Age: " << myEagle->getAge();
                        cout << ", Weight: " << myEagle->getWeight();
                        cout << "\n\n What is their diet :";
                        myEagle->getDiet();
                        cout << "\n How often do they feed :";
                        myEagle->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myEagle->getHabitat();
                        cout << "\n Other facts :";
                        myEagle->sharpVision();
                        myEagle->huntFromHigh();
                        myEagle->buildHighNests();
                        myEagle->makeSound();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Eagle\n";
                    }
                }
                else if (toLowerCase(foundanimal->getType()) == "gorilla")
                {
                    Gorilla* myGorilla = dynamic_cast<Gorilla*>(foundanimal);
                    if (myGorilla != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Gorilla
                        // you can now use myGorilla as a pointer to Gorilla
                        myGorilla->draw();
                        cout << "Age: " << myGorilla->getAge();
                        cout << ", Weight: " << myGorilla->getWeight();
                        cout << "\n\n What is their diet :";
                        myGorilla->getDiet();
                        cout << "\n How often do they feed :";
                        myGorilla->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myGorilla->getHabitat();
                        cout << "\n Other facts :";
                        myGorilla->giveBirth();
                        myGorilla->walkUpright();
                        myGorilla->eatVegetation();
                        myGorilla->beatChest();
                        myGorilla->socialize();
                        myGorilla->makeSound();
                        myGorilla->useTools();
                        myGorilla->growHair();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Gorilla\n";
                    }
                }
                else if (toLowerCase(foundanimal->getType()) == "hyena")
                {
                    Hyena* myHyena = dynamic_cast<Hyena*>(foundanimal);
                    if (myHyena != nullptr) {
                        // the cast was successful, foundAnimal was pointing to a Hyena
                        // you can now use myHyena as a pointer to Hyena
                        myHyena->draw();
                        cout << "Age: " << myHyena->getAge();
                        cout << ", Weight: " << myHyena->getWeight();
                        cout << "\n\n What is their diet :";
                        myHyena->getDiet();
                        cout << "\n How often do they feed :";
                        myHyena->getFeedingFrequency();
                        cout << "\n Where do they live :";
                        myHyena->getHabitat();
                        cout << "\n Other facts :";
                        myHyena->makeSound();
                        myHyena->growHair();
                        myHyena->huntInGroups();
                        myHyena->crushBones();
                        myHyena->scavenge();
                    }
                    else
                    {
                        cout << "\nFound Animal was not pointing to a Hyena\n";
                    }
                }
                else
                {
                    cout << "\nNot an animal we keep!\n";
                }
            }
            else
            {
                cout << "Animal not found!" << endl;
            }
        }
        cout << "############################################################################################################################";
        cout << endl << endl;
    }
    while (!nameToSearch.empty());
}
