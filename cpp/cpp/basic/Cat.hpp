//
//  Cat.hpp
//  cpp
//
//  Created by Daniel Yuwan Goh on 2019-08-02.
//  Copyright © 2019 Yuwan Go. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Cat{
    
    public:
    
    //what can be the casts property?
    std::string name;
    std::string color;
    bool single;
    double weight;
    int health;
    
    
    public:
    
        static int count;
    
        //default constructor
        Cat();
        //overloaded constructor
        Cat(std::string name, std::string color, bool single, double weight, int health);
    
        Cat(std::string name, int health);
    
        //destructor
    
        ~Cat();
    
        //copy constructor
        Cat(const Cat & obj);
    
        //get static value
        int static howManyobj(){
        return count;
        }
    
        //setters
    
        void setName(std::string name);
        void setColor(std::string color);
        void setSingle(bool single);
        void setWeight(double weight);
        void setHealth(int health);
    
        //getters
    
        std::string getName();
        std::string getColor();
        bool getSingle();
        double getWeight();
        int getHealth();
    
    
    
        // function and method
        void jump();
        void sleep();
        void eat();
        void introduceYourself();
        void printCat();
    };

#endif /* Cat_hpp */
