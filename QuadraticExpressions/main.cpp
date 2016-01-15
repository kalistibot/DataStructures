//
//  main.cpp
//  Driver/ Testing program for
//  QuadraticExpressions
//  COSC 2415 - Data Structures and
//  Program 2 - Quadratic Expressions
//  Created by Aaron on 1/14/16.
//  Copyright © 2016 Aaron. All rights reserved.
//

#include <iostream>
#include "QuadraticExpressions.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Quadratic q1,q2;
    q1.set(3,5,6);
    cout<<"first Quadratic: ";
    q1.display(std::cout);
    q2.set(1.5,2.7,-2);
    cout<<"\nsecond Quadratic: ";
    q2.display(cout);
    cout<<"\nsum of first and second: ";
    (q1 + q2).display(cout);
    
    
    cout<<endl;
    return 0;
}
