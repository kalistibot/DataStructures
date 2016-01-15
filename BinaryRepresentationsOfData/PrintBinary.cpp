//
//  PrintBinary.cpp
//  BinaryRepresentationsOfData
//
//  Created by Aaron on 1/13/16.
//  There are no Data Structures contained in this code right now.
//  Copyright © 2016 Aaron. All rights reserved.
//

#include "PrintBinary.hpp"
#include <iostream>
#include <typeinfo>
using namespace std;
/*  a quick attempt at a generic approach.  I hit a snag and decided to move on, but am leaving the code here in case I want to implement it later
template <typename T>
void printBinary(  T){
    
    
    unsigned  short SHIFT = 8* sizeof(T) -1;
    const unsigned MASK = 1 <<SHIFT;
    
    for (unsigned i = 1; i <= SHIFT+1; ++i){
        cout << (T & MASK ? '1' : '0');
        T <<=1;
        
        if (i%4 == 0)
            cout << " ";
        
    }
    
}
 */


// This takes an ASCII character and prints out
// the value of that character in binary.

void printChar( char ch){

    if (typeid(ch)!=typeid(char) ) {
        cout << "wrong input type"<<endl;
        exit(1);
    }
    
    //build the mask
    unsigned char SHIFT = 8* sizeof(char) -1;
    const unsigned MASK = 1 <<SHIFT;
    
    // And the input char against the mask and ouput the value in binary
    for (unsigned i = 1; i <= SHIFT+1; ++i){
        cout << (ch & MASK ? '1' : '0');
        ch <<=1;
        
        if (i%4 == 0)
            cout << " ";
        
    }
}


// This takes a short integer and prints out
// the value of that short in binary.

void printShort( short sh){
    if (typeid(sh)!=typeid(short) ) {
        cout << "wrong input type"<<endl;
        exit(1);
    }
    
    
    unsigned short SHIFT = 8* sizeof(short) -1;
    const unsigned MASK = 1 <<SHIFT;
 
    for (unsigned i = 1; i <= SHIFT+1; ++i){
        cout << (sh & MASK ? '1' : '0');
        sh  <<=1;
 
        if (i%4 == 0)
            cout << " ";
 
 
 }
}



// This takes a floating point value and prints out
// the value of that float in binary.

void printFloat(float fl){
    if (typeid(fl)!=typeid(float) ) {
        cout << "wrong input type"<<endl;
        exit(1);
    }
    
    union FloatValue
    {
        int intView;
        float floatView;
    };
    
    FloatValue num;
    num.floatView = fl;
    
    int SHIFT = 8* sizeof(int) -1;
    const unsigned MASK = 1 <<SHIFT;
 
    for (unsigned i = 1; i <= SHIFT+1; ++i){
        cout << (num.intView & MASK ? '1' : '0');
        num.intView  <<=1;
 
        if (i%4 == 0)
            cout << " ";
 
 }
}