#include <iostream>
#include <vector>
#include <memory>
#include "animalClasses.h"

using namespace std;
// //smart pointer version
int main()
{
    //declare a vector of animal pointers here
    vector<unique_ptr<Animal>> animals={};
    unique_ptr<Dog> dog = make_unique<Dog>();
    unique_ptr<Cat> cat = make_unique<Cat>();
    unique_ptr<Budgie> budgie = make_unique<Budgie>();
    unique_ptr<Labrador> labrador=make_unique<Labrador>();
    unique_ptr<Terrier> terrier=make_unique<Terrier>();


    //put some different kinds of animal pointers (dogs, cats, budgies) in your vector
    animals.push_back(move(dog));
    animals.push_back(move(cat));
    animals.push_back(move(budgie));
    animals.push_back(move(labrador));
    animals.push_back(move(terrier));


    //loop through all the animals in your vector and call Speak() on them in turn
    for(int i=0; i<animals.size();i++){
        animals[i]->speak();
    }

    return 0;
}



// // raw pointer version
// int main()
// {
//     //declare a vector of animal pointers here
//     vector<Animal*> animals={};

//     //put some different kinds of animal pointers (dogs, cats, budgies) in your vector
//     Dog dog1=Dog();
//     Dog dog2=Dog();
//     Cat cat1=Cat();
//     Budgie budgie1=Budgie();
//     Labrador labrador=Labrador();
//     Terrier terrier = Terrier();

//     animals.push_back(&dog1);
//     animals.push_back(&dog2);
//     animals.push_back(&cat1);
//     animals.push_back(&budgie1);
//     animals.push_back(&labrador);
//     animals.push_back(&terrier);

//     //loop through all the animals in your vector and call Speak() on them in turn
//     for(Animal* animal:animals)
//     {
//         animal->speak();
//     }

// }
