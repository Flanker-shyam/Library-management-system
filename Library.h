#ifndef LIBRARY_H
#define LIBRARY_H
#include<queue>
#include<string.h>
using namespace std;

class Liberary
{
    private:
    char name_ofUser[50];
    char userid[20];
    char password[20];
    char contact[20];

    public:
    Liberary()
    {
        strcpy(name_ofUser,"default");
        strcpy(userid,"default");
        strcpy(password,"default");
        strcpy(contact,"0000000000");
    }

    void set_name_of_user(char* name){strcpy(name_ofUser,name);}
    void setUserid(char* userid){strcpy(userid,userid);}
    void setPassword(char* pass){strcpy(password,pass);}
    void setContact(char* cont){strcpy(contact,contact);}


    char* get_name_of_user()
    {
        return name_ofUser;
    }
    char* getUserid()
    {
        return userid;
    }
    char* getPassword()
    {
        return password;
    }
    char* get_contact()
    {
        return contact;
    }
    int login_user();
    int reset_pass();
    //~Liberary();
};

#endif