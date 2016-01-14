//
//  PrintBinary.cpp
//  BinaryRepresentationsOfData
//
//  Created by Aaron on 1/13/16.
//  Copyright © 2016 Aaron. All rights reserved.
//

#include "PrintBinary.hpp"
#include <iostream>
using namespace std;
/*
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

void printChar( char ch){
    
    
    unsigned char SHIFT = 8* sizeof(char) -1;
    const unsigned MASK = 1 <<SHIFT;
    
    for (unsigned i = 1; i <= SHIFT+1; ++i){
        cout << (ch & MASK ? '1' : '0');
        ch <<=1;
        
        if (i%4 == 0)
            cout << " ";
        
    }
}



void printShort( short sh){
    unsigned short SHIFT = 8* sizeof(short) -1;
    const unsigned MASK = 1 <<SHIFT;
 
    for (unsigned i = 1; i <= SHIFT+1; ++i){
        cout << (sh & MASK ? '1' : '0');
        sh  <<=1;
 
        if (i%4 == 0)
            cout << " ";
 
 
 }
}

void printFloat(float fl){
    
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