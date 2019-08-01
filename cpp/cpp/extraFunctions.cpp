//
//  extraFunctions.cpp
//  cpp
//
//  Created by Daniel Yuwan Goh on 2019-07-31.
//  Copyright © 2019 Yuwan Go. All rights reserved.
//

#include "extraFunctions.hpp"
#include <string>
#include <iostream>



void primeNum(){
    
    for (int i = 0; i < 100; i++) {
        
        if(isPrime(i)){
            std::cout << i << " isprime ?" << std::boolalpha << isPrime(i) << std::endl;
        }
    }

    
}

bool isPrime(int value){
    
    int i ;
    
    if (value <=1){return false;}
    
    for (i = 2; i*i < value ; i++) {
        if(value % i == 0){
            return false;
            }
        }
        return true;
    }

void splitString(std::string str , char ch){
    
    
    for (int i = 0; i < str.length(); i++) {
        if(i < str.length()-1){
        std::cout << str[i] << ch ;
        }else{
            std::cout << str[i];
        }
    }
    std::cout << std::endl;
}


void reverseTheword(std::string word){
    //cteate a new string variable
    std::string str{""};
    
    // store the word letters and concatinate to the new variable from reverse otder
    for (int i = (int)word.length()-1 ; i >=0 ; i--) {
        str += word[i];
    }
    //return the new variable
    std::cout << str << "" << std::endl;
    }

