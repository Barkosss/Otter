#include "Otter.h"
#include<iostream>

// ...
Otter::Otter() {
    // ...
}

// ...
Otter::Otter(Otter& otter) {
    name = otter.name;
    age = otter.age;
    weight = otter.weight;
    gender = otter.gender;
    habitar = otter.habitar;
    intelligence = otter.intelligence;
    agility = otter.agility;
    strength = otter.strength;
    health = otter.health;
    status = otter.status;
}

// ...
Otter::~Otter() {
    std::string otterName = name;
    
    // ...
    // ...
    // ...

    std::cout << "Otter \"" << name << "\" deleted" << std::endl;
}

// ...
bool Otter::sleep() {
    if (status) {
        return false;
    }

    status = 0;
    return true;
}

// ...
bool Otter::swim() {
    if (!status) {
        return false;
    }

    status = 1;
    return true;
}

// ...
bool Otter::hunt() {
    if (!status) {
        return false;
    }

    status = 2;
    return true;
}

// ...
bool Otter::play() {
    if (!status) {
        return false;
    }

    status = 3;
    return true;
}

// ...
std::string Otter::say() {
    return "Viu-viu";
}

// ...
void Otter::setName(std::string name) {
    name = name;
}

// ...
void Otter::setAge(unsigned int age) {
    age = age;
}

// ...
void Otter::setWeight(float weight) {
    weight = weight;
}

// ...
void Otter::setGender(char gender) {
    gender = gender;
}

// ...
void Otter::setHabitar(std::string habitar) {
    habitar = habitar;
}

// ...
void Otter::setIntelligence(unsigned int intelligence) {
    intelligence = intelligence;
}

// ...
void Otter::setAgility(unsigned int agility) {
    agility = agility;
}

// ...
void Otter::setStrength(unsigned int strength) {
    strength = strength;
}

// ...
void Otter::setHeath(unsigned int health) {
    health = health;
}

// ...
unsigned Otter::getStatus() {
    return status;
}

// ...
std::string Otter::getName(std::string name) {
    return name;
}

// ...
unsigned int Otter::getAge(unsigned int age) {
    return age;
}

// ...
float Otter::getWeight(float weight) {
    return weight;
}

// ...
char Otter::getGender(char gender) {
    return gender;
}

// ...
std::string Otter::getHabitar(std::string habitar) {
    return habitar;
}

// ...
unsigned int Otter::getIntelligence(unsigned int intelligence) {
    return intelligence;
}

// ...
unsigned int Otter::getAgility(unsigned int agility) {
    return agility;
}

// ...
unsigned int Otter::getStrength(unsigned int strength) {
    return strength;
}

// ...
unsigned int Otter::getHeath(unsigned int health) {
    return health;    
}