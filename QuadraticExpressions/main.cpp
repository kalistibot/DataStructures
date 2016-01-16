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
    double multiplier;
    cout<< "\nEnter a multiplier:"<<endl;
    cin>> multiplier;
    cout<<"\nfirst Quadratic times "<< multiplier<< " is ";
    (multiplier * q1).display(cout);
    cout<<"\nsecond Quadratic times "<< multiplier<< " is ";
    (multiplier * q2).display(cout);
    cout<<endl;
   
    cout<<"First Quadratic has "<< q1.getNumRoots()<< " roots" <<endl;
    cout<<"Second Quadratic has "<< q2.getNumRoots()<< " roots" <<endl;
    cout<<"Enter a value for x:"<<endl;
    double x;
    cin >>x;
    cout<<"For that value, the value of the first Quadratic is: "<< q1.evaluate(x)<<endl;
    cout<<"For that value, the value of the second Quadratic is: "<< q2.evaluate(x)<<endl;
    cout<<"The two roots of the second Quadratic are: "<<q2.getSmallRoot()<< " and "<<q2.getLargeRoot()<<endl;
    
    return 0;
}
