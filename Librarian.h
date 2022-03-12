#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "Library.h"
#include<string.h>
using namespace std;
class Liberarian : public Liberary
{
    private:
    char name_of_liberarian[50];
    char userID[20];
    char password[20] ;

    public:
    Liberarian();
    void set_name_of_liberarian(char* name){strcpy(name_of_liberarian,name);}
    void set_userId(char* userid){strcpy(userID, userid);}
    void set_password(char* pass){strcpy(password, pass);}
    char* get_name_of_liberarian()
    {
        return name_of_liberarian;
    }
    char* get_userId()
    {
        return userID;
    }
    char* get_password()
    {
        return password;
    }
    int new_liberarian_registration();
    void liberarian_login();
    void add_a_book(char* old_book);
    void remove_a_book(char* new_book);
    void show_registred_students();
    void show_all_issued_books();
    int Liberarian::reset_pass();
    ~Liberarian();
};
#endif