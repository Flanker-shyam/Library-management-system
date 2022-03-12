#include<iostream>
#include<fstream>
#include "Library.h"
#include "Students.h"
#include "Librarian.h"
using namespace std;

int main()
{
    Liberary liberary;
    Liberarian L1;
    Students s1;
    cout<<"\n              Welcome to State Liberary                \n";
    cout<<"\n                      Menu                             \n";
    cout<<"\n1. Liberarian \n2. Student  \n3. Exit\n";
    int choice;
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            ///For liberarian
        }

        case 2:
        {
            //for Students
        }

        case 3:
        {
            //exit
        }
        
        default:
        {
            cout<<"\nEnter a valid choice\n";
        }
    }
    
}