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
    double a1,a2,b1,b2,c1,c2;
    cout<<"Enter Coefficients for Q1.\na:";
    cin>>a1;
    cout<<"b:";
    cin>>b1;
    cout<<"c:";
    cin>>c1;
    q1.set(a1,b1,c1);
    cout<<"first Quadratic: ";
    q1.display(std::cout);
    cout<<"\nEnter Coefficients for Q2.\na:";
    cin>>a2;
    cout<<"b:";
    cin>>b2;
    cout<<"c:";
    cin>>c2;
    
    q2.set(a2,b2,c2);
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
   // int numRoots1 = q1.getNumRoots();
   // int numRoots2 = q2.getNumRoots();
   // if (numRoots1==3){
   //     cout<<
   // }
    
    cout<<"The two roots of the first Quadratic are: "<<q1.getSmallRoot()<< " and "<<q1.getLargeRoot()<<endl;
    cout<<"The two roots of the second Quadratic are: "<<q2.getSmallRoot()<< " and "<<q2.getLargeRoot()<<endl;
    
    return 0;
}
