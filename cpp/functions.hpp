//
//  functions.hpp
//  main
//
//  Created by Daniel Yuwan Goh on 2019-07-31.
//  Copyright © 2019 Yuwan Go. All rights reserved.
//

#include <iostream>
#include <string>


//prototype

void someDataTypes(void);
void stackMenu();
bool push(int val);
void pop();
void printStack();
void message (std::string msg);

void InitStack();
bool PushWithPointer(int);
int PopWithPointer();
void PrintStackWithPointer();
void stackMenuWithPointer();

int add(int a, int b ,int c);
int modify (int a, int &b ,int &c);
int result();
void printDoubleNums();
int multiplication();

long long int fibo(unsigned int order);
long long int factorial(unsigned int number);
void studentlist();

void printCat();
void testTime();
