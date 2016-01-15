//
//  QuadraticExpressions.cpp
//  QuadraticExpressions
//
//  Created by Aaron on 1/14/16.
//  Copyright © 2016 Aaron. All rights reserved.
//

#include "QuadraticExpressions.hpp"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
Quadratic::Quadratic(){
    
    this->a=0;
    this->b=0;
    this->c=0;
}

void Quadratic::set( double newA, double newB, double newC ){
    this->a=newA;
    this->b=newB;
    this->c=newC;
}


double Quadratic::getA() const{
    return this->a;
}
double Quadratic::getB() const{
    return this->b;
}
double Quadratic::getC() const{
    return this->c;
}
//void Quadratic::display() const
    
void Quadratic::display( std::ostream& out ) const{
   
    //This if else construct is in place in order
    // to add parenthesis if the coefficient is negative.
    stringstream s;
    std::string  a,b,c;
    if (this->a<0) {
        s<<"("<<this->a<<")";
    }else{
        s<<this->a;
    }
    s<<"x^2+";
    if (this->b<0) {
        s<<"("<<this->b<<")";
    }else{
        s<<this->b;
    }
    s<<"x+";
    if (this->c<0) {
        s<<"("<<this->c<<")";
    }else{
        s<<this->c;
    }
    out<<s.str();
}


// Postcondition: The return value is the quadratic expression
// that is the sum of q1 and q2. The a coefficient
// of the return value is the sum of the a coefficients
// of q1 and q2. The b and c coefficients are similar.
Quadratic operator+( const Quadratic& q1, const Quadratic& q2 ){
    
    Quadratic sum;
    double newA, newB, newC;
    newA=q1.getA() + q2.getA();
    newB=q1.getB() + q2.getB();
    newC=q1.getC() + q2.getC();
    sum.set(newA,newB,newC);
    return sum;
    
}


// Postcondition: The return value is the quadratic expression
// obtained by multiplying each of q's coefficients by r.
Quadratic operator*( double r, const Quadratic& q ){
    Quadratic product;
    double newA, newB, newC;
    newA = q.getA()*r;
    newB = q.getB()*r;
    newC = q.getC()*r;
    product.set(newA,newB,newC);
    return product;
}



/*
double evaluate( double x ) const;
int getNumRoots() const;
double getSmallRoot() const;
double getLargeRoot() const;
*/