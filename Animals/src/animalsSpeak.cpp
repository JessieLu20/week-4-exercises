#include <iostream>
#include <vector>
#include <memory>
#include "animalClasses.h"

using namespace std;
// smart pointer version
// int main()
// {
//     //declare a vector of animal pointers here
//     vector<unique_ptr<Animal>> v={};
//     unique_ptr<Dog> dog = make_unique<Dog>();
//     unique_ptr<Cat> cat = make_unique<Cat>();
//     unique_ptr<Budgie> budgie = make_unique<Budgie>();


//     //put some different kinds of animal pointers (dogs, cats, budgies) in your vector
//     v.push_back(move(dog));
//     v.push_back(move(cat));
//     v.push_back(move(budgie));


//     //loop through all the animals in your vector and call Speak() on them in turn
//     for(int i=0; i<v.size();i++){
//         v[i]->speak();
//     }

//     return 0;
// }

// raw pointer version
int main()
{
    //declare a vector of animal pointers here
    vector<Animal*> v={};

    //put some different kinds of animal pointers (dogs, cats, budgies) in your vector
    Dog dog1=Dog();
    Dog dog2=Dog();
    Cat cat1=Cat();
    Budgie budgie1=Budgie();
    Labrador labrador=Labrador();

    v.push_back(&dog1);
    v.push_back(&dog2);
    v.push_back(&cat1);
    v.push_back(&budgie1);
    v.push_back(&labrador);

    //loop through all the animals in your vector and call Speak() on them in turn
    for(Animal* i:v)
    {
       i->speak();
    }

}