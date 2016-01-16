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
#include <math.h>
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


int Quadratic::getNumRoots() const{
    int roots;
    
    //If a, b and c are all zero, then every value of x is a real root.
    // for this case, 3 equals infinite.
    if ( this->a == 0 && this->b == 0 && this->c == 0 ) {
        roots = 3;
        return roots;
    }
    
    // If a and b are zero and c is non-zero, then there are no real roots.
    if ( this->a ==0 && this->b == 0 && this->c !=0 ) {
        roots = 0;
        return roots;
    }
    
     //If a is zero and b is non-zero, then the only real root is x = -c/b.
    if ( this->a ==0 && this->b != 0 ) {
        roots = 1;
        return roots;
    }

    //If a is non-zero and b2 < 4ac, then there are no real roots.
    if (this->a !=0 && (this->b<(4 * this->a *this->c))) {
        roots = 0;
        return roots;
    }
    
    //If a is non-zero and b2 = 4ac, then there is one real root x = -b/(2a).
    if (this->a !=0 && (this->b==(4 * this->a *this->c))) {
        roots = 1;
        return roots;
     }
    
    //If a is non-zero and b2 > 4ac, then there are two real roots:
    if (this->a !=0 && (this->b>(4 * this->a *this->c))) {
        roots = 2;
    }
    return roots;
}

double Quadratic:: evaluate( double x ) const{
    double result;
    result = ((this->a* pow(x,2))+(this->b*x)+this->c);
    return result;
}


double Quadratic:: getSmallRoot() const{
    double result;
    //     -b - sqrt( b2 - 4ac )
    // x = ________________
    //            2a

    result = ((-1 * this->b) - sqrt(pow((this->b),2)-4 *this->a*this->c))/2*this->a;
    return result;
}

double Quadratic:: getLargeRoot() const{
    double result;
    //     -b + sqrt( b2 - 4ac )
    // x = ________________
    //            2a
    
    result = ((-1 * this->b) + sqrt(pow((this->b),2)-4 *this->a*this->c))/2*this->a;
    
    return result;
}
