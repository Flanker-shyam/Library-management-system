#include "Books.h";
#include<iostream>
//#include<string.h>
#include<fstream>
using namespace std;

void Books::search_a_book()
{
    char bookname[50]; bool found=0;
    cout<<"\nEnter the name of the book to search: ";
    cin.getline(bookName,50);
    ifstream fin;
    fin.open("book_database.txt",ios::in | ios::binary);
    fin.seekg(0);
    fin.read((char*)this, sizeof(*this));
    while(!fin.eof())
    {
        if(!strcmp(bookname,bookName))
        {
            found =1;
            if(quantity>0)
            {
                cout<<"\nBook is available in the library\n";
                fin.close();
                break;
            }
            else
            {
                cout<<"\nSorry this book is not available in the library\n";
                fin.close();
                break;
            }
        }
        fin.read((char*)this, sizeof(*this));
    }
    if(!found){ cout<<"\nsorry this book is not available in the library\n";}
    fin.close();
}

void Books :: show_all_books()
{
    ifstream fin;
    fin.open("book_database.txt",ios::in | ios::binary);
    fin.read((char*)this, sizeof(*this));
    while(!fin.eof())
    {
        cout<<bookName<<"  "<<quantity<<endl;
        fin.read((char*)this, sizeof(*this));
    }
    fin.close();
}

int Books::issue_a_book()
{
char bookname[50]; bool found=0;
cout<<"\nEnter the name of the book to search: ";
cin.getline(bookName,50);
fstream FILE;
FILE.open("book_database.txt",ios::in | ios::binary);
FILE.seekg(0);
FILE.read((char*)this, sizeof(*this));
while(!FILE.eof())
{
    if(!strcmp(bookname,bookName))
    {
        found=1;
        if(quantity>0)
        {
            cout<<"\nBook is available in the library\n";
            cout<<"\nBook is successfully issued to you\n";
            setQuantity(quantity-1);
            FILE.seekp(FILE.tellp()- sizeof(*this));
            FILE.write((char*)this, sizeof(*this));
            FILE.close();
            return (1);
        }
        else
        {
            cout<<"\nSorry this book is not available at this moment\n";
            return (0);
        }
    }
    FILE.read((char*)this, sizeof(*this));
}
if(!found){ cout<<"\nsorry this book is not available in the library\n";}
FILE.close();
}


int Books:: return_a_book()
{
char bookname[50]; bool found =0;
cout<<"\nEnter the name of the book to search: ";
cin.getline(bookName,50);
fstream FILE;
FILE.open("book_database.txt",ios::in | ios::binary);
FILE.seekg(0);
FILE.read((char*)this, sizeof(*this));
while(!FILE.eof())
{
    if(!strcmp(bookname,bookName))
    {
        found=1;
        cout<<"\nBook is successfully returned to the Library\n";
        setQuantity(quantity+1);
        FILE.seekp(FILE.tellp()- sizeof(*this));
        FILE.write((char*)this, sizeof(*this));
        FILE.close();
        return (1);
    }
    FILE.read((char*)this, sizeof(*this));
}
    cout<<"\nSorry this book doesn't belong to this librara\n";
    FILE.close();
    return (0);
}
void Books::add_a_book(char* old_book)
{
    char bookname[50]; bool found =0;
    cout<<"\nEnter the name of the book to search: ";
    cin.getline(bookName,50);
    fstream FILE;
    FILE.open("book_database.txt",ios::in | ios::binary);
    FILE.seekg(0);
    FILE.read((char*)this, sizeof(*this));
    while(!FILE.eof())
    {
        if(!strcmp(bookname,bookName))
        {
            found = 1;
            cout<<"\nBook is successfully added in the Library\n";
            setQuantity(quantity+1);
            FILE.seekp(FILE.tellp()- sizeof(*this));
            FILE.write((char*)this, sizeof(*this));
            break;
        }
        FILE.read((char*)this, sizeof(*this));
    }
    if(!found)
    {
        setBookName(bookname);
        setQuantity(1);
        FILE.write((char* )this, sizeof(*this));
    }
    FILE.close();
}
void Books::remove_a_book(char* new_book)
{
    char bookname[50]; bool found =0;
    cout<<"\nEnter the name of the book to search: ";
    cin.getline(bookName,50);
    fstream FILE;
    FILE.open("book_database.txt",ios::in | ios::binary);
    FILE.seekg(0);
    FILE.read((char*)this, sizeof(*this));
    while(!FILE.eof())
    {
        if(!strcmp(bookname,bookName))
        {
            found=1;
            cout<<"\nBook is successfully returned to the Library\n";
            setQuantity(0);
            FILE.seekp(FILE.tellp()- sizeof(*this));
            FILE.write((char*)this, sizeof(*this));
            FILE.close();
            break;
        }
    FILE.read((char*)this, sizeof(*this));
}
    if(!found)
    {
        cout<<"\n NO record found for this book in the database\n";
    }
    FILE.close();
}