#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "Library.h"
#include<string>
using namespace std;
class Liberarian : public Liberary
{
    private:
    string name_of_liberarian= "Ashok Kumar";
    string userID= "liberarian";
    string password = "lib@123";

    public:
    Liberarian();
    void set_name_of_liberarian(string name){name_of_liberarian=name;}
    void set_userId(string userid){userID= userid;}
    void set_password(string pass){password= pass;}
    string get_name_of_liberarian()
    {
        return name_of_liberarian;
    }
    string get_userId()
    {
        return userID;
    }
    string get_password()
    {
        return password;
    }
    int new_liberarian_registration();
    void liberarian_login();
    void add_a_book(string old_book);
    void remove_a_book(string new_book);
    void show_registred_students();
    void remove_registered_student(string name);
    void show_all_issued_books();
    ~Liberarian();
};
#endif