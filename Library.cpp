#include "Library.h"
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int Liberary:: login_user()
{
    string userID, pass, user,pas;
    cout<<"\nEnter username: ";
    cin>>userID;
    cout<<"\nEnter your password: ";
    cin>>pass;

    ifstream fin;
    fin.open("login_info.txt", ios::in | ios::binary);
    // fin.read((char*)this, sizeof(*this));
    while(fin>>userID>>pas)
    {
        if(userID==user && pass==pas)
        {
            return (1);
        }
        // fin.read((char*)this, sizeof(*this));
    }
    fin.close();
    return (0);
}
int Liberary:: reset_pass()
{
   char username[20], cont[12],pass[20];
   cout<<"\nEnter username: ";
   cin.getline(username,20);
   cout<<"\nEnter your contact number: ";
   cin.getline(cont,12);
   fstream FILE;
    FILE.open("Registration_details.txt", ios::in | ios::out | ios::ate | ios::binary);
    FILE.seekg(0);
    FILE.read((char*)this, sizeof(*this));
    while(!FILE.eof())
    {
        if((!strcmp(username,userid ))&&(!strcmp(cont,contact)))
        {
            cout<<"\nEnter new password: ";
            cin.getline(pass,20);
            setPassword(pass);
            FILE.seekp(FILE.tellp()- sizeof(*this));
            FILE.write((char*)this, sizeof(*this));
            return 1;
        }
        FILE.read((char*)this, sizeof(*this));
    }
    FILE.close();
    return (0);
}
