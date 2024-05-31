#pragma once
#include<string>

class Otter {
private:
    std::string name;
    unsigned int age;
    float weight;
    char gender;
    std::string habitar;


    unsigned int intelligence;
    unsigned int agility;
    unsigned int strength;
    unsigned int health;

    unsigned status;

public:
    // ...
    Otter();

    // ...
    Otter(Otter& otter);

    // ...
    ~Otter();

    // ...
    bool swim();

    // ...
    bool hunt();

    // ...
    bool sleep();

    // ...
    bool play();

    // ...
    std::string say();

    // ...
    void setName(std::string name);

    // ...
    void setAge(unsigned int age);
    
    // ...
    void setWeight(float weight);

    // ...
    void setGender(char gender);

    // ...
    void setHabitar(std::string habitar);

    // ...
    void setIntelligence(unsigned int intelligence);

    // ...
    void setAgility(unsigned int agility);

    // ...
    void setStrength(unsigned int strength);

    // ...
    void setHeath(unsigned int health);

    // ...
    unsigned getStatus();

    // ...
    std::string getName(std::string name);

    // ...
    unsigned int getAge(unsigned int age);
    
    // ...
    float getWeight(float weight);

    // ...
    char getGender(char gender);

    // ...
    std::string getHabitar(std::string habitar);

    // ...
    unsigned int getIntelligence(unsigned int intelligence);

    // ...
    unsigned int getAgility(unsigned int agility);

    // ...
    unsigned int getStrength(unsigned int strength);

    // ...
    unsigned int getHeath(unsigned int health);
};