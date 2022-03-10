#include "Library.h"
#include<iostream>
#include<fstream>
using namespace std;

int Liberary:: login_user()
{
    string userid, passw;
    string user = getUserid();
    string pass = getPassword();

    fstream fin;
    while(fin>>userid>>passw)
    {
        if(userid==user&&passw==pass)
        {
            cout<<"\n**Successfully login**\n";
        }
        else
        {
            int opt;
            cout<<"\nForget password?"<<endl;
            cout<<"\npress 1 to reset password: ";
            cout<<"\npress 2 to try again: ";
            cout<<"\npress 3 to exit: ";
            cin>>opt;
            return opt;
        }
    }
    return 0;
}
int Liberary:: reset_pass()
{
    string userID, pass, contact;
    string user = getUserid();
    string cont = get_contact();
    fstream fin;
    fin.open("login_info.txt");
    while(fin>>userID>>pass>>contact)
    {
        if(userID==user)
        {
            if(cont == contact)
            {
                cout<<"\nAccount confirmation successful\n";
                cout<<"\nYour Userid is: "<<userID<<endl;
                cout<<"\nYour Password is: "<<pass<<"\n"<<endl;
            }
            else
            {
               cout<<"\nAccount info doesn't exist\n"; 
            }
        }
        else
        {
            int n;
            cout<<"\nAccount info doesn't exist\n";
            cout<<"\nPress 1 to try again: ";
            cout<<"\nPress 0 to exit: ";
            cin>>n;
            return n;
        }
    }
}

void Liberary::search_a_book()
{
    string book;
    int quantity;
    string Book = get_book_name();
    ifstream fin;
    fin.open("book_database");
    while(fin>>book>>quantity)
    {
        if(book==Book)
        {
            if(quantity!=0)
            {
                cout<<"\nBook is available\n";
            }
            else
            {
                cout<<"Book is not available\n";
            }
        }
        if(fin.eof())
        {
            cout<<"\nBook is not available\n";
        }
    }
    
}

