//
//  main.cpp
//  BinaryRepresentationsOfData
//  Project 1
//  Created by Aaron on 1/13/16.
//  There are no Data Structures contained in this code right now.
//  Copyright © 2016 Aaron. All rights reserved.
//

#include <iostream>
#include "PrintBinary.hpp"
#include <typeinfo>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.clear();
    cout<<"Menu \n \
    1 - Print the binary representation of a character \n \
    2 - Print the binary representation of a short integer \n \
    3 - Print the binary representation of a float \n \
    4 - Exit program "<<endl;
    int choice;
    cin>>choice;
    cin.clear();

    while (choice!=4) {

        while ((choice<1 ||  choice>4)) {
            cout<<"Try again.  Please enter a choice between 1 and 4!"<<endl;
            cin>>choice;
            cin.clear();
        }
        switch (choice) {
            case 1:
                cout<< "Enter a character: "<<endl;
                char ch;
                cin >>ch;
                cin.clear();
                while  (ch<32||ch>127) {
                    cout << "I don't recognize that character.  Please enter an ASCII character. "<<endl;
                    cin>>ch;
                    cin.clear();
                }
                
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
            case 4:
                cout <<"Goodbye. \n";
                return 0;
            default:
                break;
        }
        cout<<"\nPlease enter a choice between 1 and 4. "<<endl;
        cin>>choice;
        cin.clear();
    }
    if (choice==4)
        cout<<"Goodbye for now."<<endl;

    cout<<"Press any key to end"<<endl;
    cin.get();
    return 0;
}
