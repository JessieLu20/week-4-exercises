#pragma once
using namespace std;

class Animal
{
    public:
    Animal(){}

    virtual void speak() = 0;
};

class Dog: public Animal
{
    public:
    void speak();
};

class Cat: public Animal
{
    public:
    void speak();
};


class Budgie: public Animal
{
    public:
    void speak();
};

class Labrador:public Dog{
    public:
    void speak();
};

class Terrier:public Dog{
    public:
    void speak();
};