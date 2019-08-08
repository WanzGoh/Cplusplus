//
//  Cat.cpp
//  cpp
//
//  Created by Daniel Yuwan Goh on 2019-08-02.
//  Copyright © 2019 Yuwan Go. All rights reserved.
//

#include "Cat.hpp"
#include <string>

int Cat::count = 0;

//default constructor
Cat::Cat():Cat("unknown", "unknown",true ,0,0){
    std::cout << "default constructor called" << std::endl;
}
//delegate this constructor to the
Cat::Cat(std::string name, int health):Cat(name , "brown", true , 1 , health){
     std::cout << "overloaded constructor called" << std::endl;
    
}

Cat::Cat(const Cat & obj){
    std::cout<<"copy constuctor called " << std::endl;
    this->name = obj.name;
    this->color = obj.color;
    this->single = obj.single;
    this->weight = obj.weight;
    this->health = obj.health;
    
    count ++;
}



Cat::Cat(std::string name, std::string color, bool single, double weight, int health){
    std::cout << "overloaded constructor called" << std::endl;
    this->name = name;
    this->color = color;
    this->single = single;
    this->weight = weight;
    this->health = health;
    // increment whenever an object is created
    count ++;
}

Cat::~Cat(){
    std::cout << "destructor called " << this -> name << " is dead!" << std::endl;
    count --;
}


//setters
void Cat::setName(std::string name){
    this->name = name;
}
void Cat::setColor(std::string color){
    this->color = color;
}
void Cat::setSingle(bool single){
    this->single = false;
}
void Cat::setWeight(double weight){
    this->weight = weight;
}
void Cat::setHealth(int health){
    this->health = health;
}

//getters
std::string Cat::getName(){
    return this->name;
}
std::string Cat::getColor(){
    return this->color;
}
bool Cat::getSingle(){
    return this->single;
    
}
double Cat::getWeight(){
    return this->weight;
}
int Cat::getHealth(){
    return this->health;
}


    // this is  implementation
void Cat::jump(){
    std::cout <<" I jumped like a crazy cat " << std::endl;
}
void Cat::sleep(){
    std::cout << "ZzZz I like sleeping all day long" << std::endl;
}
void Cat::eat(){
    std::cout << "Umm I like tuna" << std::endl;
}

void Cat::introduceYourself(){
    
    std::cout << "the name of the cat is " << this->name << std::endl;
    std::cout << "the color of the cat is " << this->color << std::endl;
    std::cout << "the weight of the cat is " << this->weight << " lb" << std::endl;
    std::cout << "the health of the cat is " << this->health << std::endl;
    (this->single) ? std::cout << "this cat is a single cat " << std::endl : std::cout << "this cat is not single! " << std::endl ;
    std::cout << std::endl;
}
void printCat(){
    
    std::cout << Cat::howManyobj() << "object in the memory" << std::endl;
    
    
    Cat phiphi;
    phiphi.setName("phiphi");
    phiphi.setColor("white");
    phiphi.setWeight (10.4);
    phiphi.setHealth (100);
    phiphi.setSingle (false);
    
    std::cout << "the name of the cat is " << phiphi.name << std::endl;
    std::cout << "the color of the cat is " << phiphi.color << std::endl;
    std::cout << "the weight of the cat is " << phiphi.weight << " lb" << std::endl;
    std::cout << "the health of the cat is " << phiphi.health << std::endl;
    std::cout << "is this a single cat? " << std::boolalpha << phiphi.single << std::endl;
    std::cout<<std::endl;
    
    // ternary operator
    //( condition ) ? true : false
    (phiphi.single) ? std::cout << "this cat is a single cat " << std::endl : std::cout << "this cat is not single! " << std::endl ;
    std::cout << Cat::howManyobj() << "object in the memory" << std::endl;
    std::cout << std::endl;
    
    
    std::cout << "the name of the cat is " << phiphi.getName() << std::endl;
    std::cout << "the color of the cat is " << phiphi.getColor() << std::endl;
    std::cout << "the weight of the cat is " << phiphi.getWeight() << " lb" << std::endl;
    std::cout << "the health of the cat is " << phiphi.getHealth() << std::endl;
    std::cout << "is this a single cat? " << std::boolalpha << phiphi.getSingle()<< std::endl;
    
    std::cout<<std::endl;
    
    // ternary operator
    //( condition ) ? true : false
    (phiphi.getSingle()) ? std::cout << "this cat is a single cat " << std::endl : std::cout << "this cat is not single! " << std::endl ;
    std::cout << std::endl;
    std::cout << Cat::howManyobj() << "object in the memory" << std::endl;
    phiphi.introduceYourself();
    
    
    Cat pupu ("pupu", "black", false, 10.2, 98);
    pupu.introduceYourself();
    
    //default constructor will be called
    Cat delegatedCat{};
    delegatedCat.introduceYourself();
    
    Cat copyphiphi(phiphi);
    copyphiphi.introduceYourself();
}
