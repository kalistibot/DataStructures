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
    
    // Declare two quadratic objects - first and second
    
    Quadratic q1,q2;
    q1.set(1,7,12);
    q2.set(7,8,-11);
    double a1,a2,b1,b2,c1,c2;
    char choice;
    cout << "Two quadratics have been created and initialized to default values." << endl;
    
    do
    {
        cout << "\n\n\n\nPlease choose one of the following:\n"
        << "   1 - Display first quadratic\n"
        << "   2 - Display second quadratic\n"
        << "   3 - Modify the coefficients of first quadratic\n"
        << "   4 - Modify the coefficients of second quadratic\n"
        << "   5 - Display the coefficients of first quadratic\n"
        << "   6 - Evaluate the first quadratic at a given value of x\n"
        << "   7 - Display the number of roots, smallest root and largest root for first quadratic\n"
        << "   8 - Display the sum of first and second quadratic\n"
        << "   9 - Display the product of first quadratic and a given floating-point value\n"
        << "   X - Exit" << endl;
        
        cout << "\nEnter your choice: "<<endl;
        cin.clear();
        cin  >> choice;
        switch (choice) {
            case '1':
                cout<<"\nfirst Quadratic: ";
                q1.display(std::cout);
                cout<<endl;
                break;
            case '2':
                cout<<"\nsecond Quadratic: ";
                q2.display(std::cout);
                cout<<endl;
                break;
            case '3':
                cout<<"\nEnter Coefficients for Q1.\na:";
                cin>>a1;
                cout<<"b:";
                cin>>b1;
                cout<<"c:";
                cin>>c1;
                q1.set(a1,b1,c1);
                break;
            case '4':
                cout<<"\nEnter Coefficients for Q2.\na:";
                cin>>a2;
                cout<<"b:";
                cin>>b2;
                cout<<"c:";
                cin>>c2;
                q2.set(a2,b2,c2);
                break;
            case '5':
                cout<<"\ncoefficients of first quadratic:";
                cout<<"a:"<<q1.getA()<<" "<<"b:"<<q1.getB()<<" "<<"c:"<<q1.getC()<<endl;
                break;
            case '6':
                cout<<"\nEnter a value for x:"<<endl;
                double x;
                cin >>x;
                cout<<"\nFor that value, the value of the first Quadratic is: "<< q1.evaluate(x)<<endl;
                break;
            case '7':
                if (q1.getNumRoots() ==0) {
                    cout<<"\nQ1 has no real roots"<<endl;
                }
                if (q1.getNumRoots() ==1){
                    cout<< "\nThe root of Q1 is "<<q1.getSmallRoot();
                }else if (q1.getNumRoots() ==2){
                    cout<<"\nThe roots of the first Quadratic are: "<<q1.getSmallRoot()<< " and "<<q1.getLargeRoot()<<endl;
                }else if (q1.getNumRoots()==3){
                    cout << "\nEvery value of x is a root of ";
                    q1.display(std::cout);
                }
                
                break;
            case '8':
                cout<<"\nsum of first and second: ";
                (q1 + q2).display(cout);
                break;
            case '9':
                double multiplier;
                cin.clear();
                cout<<"Enter a multiplier:";
                cin>>multiplier;
                cout<<"\nFirst Quadratic times "<< multiplier<< " is ";
                (multiplier * q1).display(cout);
                cout<<endl;
                break;
            case 'X':
                cout<< "Goodbye."<<endl;
                exit(0);
                break;
            case 'x':
                cout<< "Goodbye."<<endl;
                exit(0);
                break;
            default:
                cout << "Not a valid option" << endl;
                break;
        
        }
    

    
    } while (choice != 'X' && choice != 'x');

    return 0;
}
