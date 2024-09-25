// firstClassProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

using namespace std; 

class Animal
{
    // Create constructors for our class
public: 
    Animal(string aName)
    {
        name = aName; 
        origin = "somePlace"; 
        age = 0; 
    }

    Animal()
    {
        age = 0; 
        sex = "unknown"; 
        weight = 0; 
        dateOfBirth = "unknown"; 
        color = "unknown"; 
        name = "toBeNamed"; 
        origin = "unknown"; 
    }

    int age; 
    int weight; 
    string sex; 
    string name; 
    string color; 
    string origin; 
    string dateOfBirth; 

};

class Hyena : public Animal
{
    // Create a constructor that uses the super class's constructor 
public: 
    Hyena(string someName) : Animal(someName) 
    {

    }
    Hyena() : Animal()
    {

    }
};

int main()
{
    cout << "Welcome to my Zoo program! " << endl; 

    // Create a NEW animal object
    // the new keyword allocats memory on the heap and returns the address of he object 
    Animal* myAnimal = new Animal(); 

    myAnimal->age = 10; 
    myAnimal->color = "red"; 
    myAnimal->name = "Bob";
    myAnimal->sex = "male";
    myAnimal->weight = 20;
    myAnimal->dateOfBirth = "2014";

    cout << "This is my animal object:" << endl; 

    cout << "age: " << myAnimal->age << ", color: " << myAnimal->color << ", name: " << myAnimal->name << ", sex: " << myAnimal->sex << ", weight: " << myAnimal->weight << ", DOB: " << myAnimal->dateOfBirth << endl;

    // Create another animal object without using a pointer and new
    Animal anotherAnimal;

    anotherAnimal.age = 10; 
    anotherAnimal.color = "red"; 
    anotherAnimal.name = "Bob"; 
    anotherAnimal.sex = "male"; 
    anotherAnimal.weight = 20; 
    anotherAnimal.dateOfBirth = "2014"; 

    cout << "age: " << anotherAnimal.age << ", color: " << anotherAnimal.color << ", name: " << anotherAnimal.name << ", sex: " << anotherAnimal.sex << ", weight: " << anotherAnimal.weight << ", DOB: " << anotherAnimal.dateOfBirth << endl;

    // Create an animal with a name
    Animal* animalWithName = new Animal("Leo");
    cout << "name: " << animalWithName->name << endl; 


    // Create an animal with the default constructor 
    Animal* animalDefault = new Animal(); 
    cout << "age: " << animalDefault->age << " name: " << animalDefault->name << endl; 

    // Create a hyena
    Hyena* myHyena = new Hyena("Shenzi"); 
    cout << "This is a hyena " << endl; 
    cout << "origin: " << myHyena->origin << ", age: " << myHyena->age << endl;

    Hyena* myHyena2 = new Hyena(); 
    cout << "This is another hyena " << endl; 
    cout << "name: " << myHyena2->name << endl; 




    return 0; 
}
