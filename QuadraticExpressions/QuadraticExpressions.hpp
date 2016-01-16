//
//  QuadraticExpressions.hpp
//  QuadraticExpressions
//
//  Created by Aaron on 1/14/16.
//  Copyright © 2016 Aaron. All rights reserved.
//

#ifndef QuadraticExpressions_hpp
#define QuadraticExpressions_hpp

#include <stdio.h>
#include <iostream>
class Quadratic{
private:
    float a;
    float b;
    float c;
    float x;
public:
    Quadratic(); //default constructor

void set( double newA, double newB, double newC );
double getA() const;
double getB() const;
double getC() const;
//void display() const;
void display( std::ostream& out ) const;
double evaluate( double x ) const;
int getNumRoots() const;
double getSmallRoot() const;
double getLargeRoot() const;

friend Quadratic operator+( const Quadratic& q1, const Quadratic& q2 );


friend Quadratic operator*( double r, const Quadratic& q );
};
#endif /* QuadraticExpressions_hpp */
