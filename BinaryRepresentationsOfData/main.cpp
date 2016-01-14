//
//  main.cpp
//  BinaryRepresentationsOfData
//
//  Created by Aaron on 1/13/16.
//  Copyright © 2016 Aaron. All rights reserved.
//

#include <iostream>
#include "PrintBinary.hpp"
using namespace std;

int main(int argc, const char * argv[]) {

/*
    cout<< "The size of a char is " << sizeof(char);
    cout<< "\nThe size of a short is "<< sizeof(short);
    cout<< "\nThe size of a float is "<<sizeof(float)<<endl;

    cout<< "The value of C :";
    printChar('C');
    cout<< "\nThe value of 1234 :";
    printShort(1234);
    cout<<"\nThe value of 3.1457 :";
    printFloat(3.1457);
    cout<<endl;
  */
    
    int choice;
    cout<<" Menu \n \
    1 - Print the binary representation of a character \n \
    2 - Print the binary representation of a short integer \n \
    3 - Print the binary representation of a float \n \
    4 - Exit program "<<endl;
    
    cin>>choice;
    while (choice<1 ||choice>4) {
        cout<<"Please enter a choice between 1 and 4!"<<endl;
        cin>>choice;
    }

    
    switch (choice) {
        case 1:
            cout<< "Enter a character: "<<endl;
            char ch;
            cin >>ch;
            printChar(ch);
            break;
        case 2:
            cout << "Enter a short integer: "<<endl;
            short sh;
            cin >>sh;
            printShort(sh);
            break;
         case 3:
            cout << "Enter a float: "<<endl;
            float fl;
            cin >>fl;
            printFloat(fl);
            break;
        default:
            break;
    }

    cout<<"Press any key to end"<<endl;
    cin.get();
    return 0;
}
