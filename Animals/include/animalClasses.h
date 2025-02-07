#pragma once
using namespace std;

class Animal
{
    public:
    Animal(){}

    virtual void speak() = 0;
};

class Mammal: public Animal
{
    public:
    Mammal(){}
};

class Bird: public Animal
{
    public:
    Bird(){}
};

class Dog: public Mammal
{
    public:
    void speak() override;
};

class Cat: public Mammal
{
    public:
    void speak() override;
};


class Budgie: public Bird
{
    public:
    void speak() override;
};

class Labrador:public Dog{
    public:
    void speak() override;
};

class Terrier:public Dog{
    public:
    void speak() override;
};