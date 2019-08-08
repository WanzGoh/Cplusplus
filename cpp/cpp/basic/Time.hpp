//
//  Time.hpp
//  cpp
//
//  Created by Daniel Yuwan Goh on 2019-08-08.
//  Copyright © 2019 Yuwan Go. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
#include <iostream>
#include <string>


class Time{
    
    private :
    std::string day; // Am or Pm
    int second;
    int minute;
    int hour;
    
    
public:
    std::string getDay();
    void setDay(std::string day);
    
    int getSecond();
    void setSecond(int second);
    
    int geMinute();
    void setMinute(int minute);
    
    int getHour();
    void setHour(int hour);

    // default constructor
    Time();
    //overloaded constructor
    Time(std::string day, int hour, int minute, int second);
    //default parameter for day is "AM"
     Time(int hour, int minute, std::string day = "AM");
    
    ~Time();
    
    void whatTimeIsIt();
    void shortTime();
    void testTime();
};




#endif /* Time_hpp */
