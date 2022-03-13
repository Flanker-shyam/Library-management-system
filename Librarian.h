#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "Library.h"
#include<string.h>
using namespace std;
class Liberarian : public Liberary
{
    private:
    char userID[20];
    char password[20];

    public:
    Liberarian()
    {
        strcpy(userID,"deafult");
        strcpy(password,"default");
    }
    void set_userId(char* userid){strcpy(userID, userid);}
    void set_password(char* pass){strcpy(password, pass);}
    char* get_userId()
    {
        return userID;
    }
    char* get_password()
    {
        return password;
    }
};
#endif