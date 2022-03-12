#ifndef LIBRARY_H
#define LIBRARY_H
#include<queue>
#include<string.h>
using namespace std;

class Liberary
{
    private:
    char name_ofUser[50];
    char bookName[50];
    char userid[20];
    char password[20];
    char contact[20];
    int quantity=0;

    public:
    Liberary();

    void set_name_of_user(char* name){strcpy(name_ofUser,name);}
    void setbookName(char* bname){strcpy(bookName,bname);}
    void setUserid(char* userid){strcpy(userid,userid);}
    void setPassword(char* pass){strcpy(password,pass);}
    void setContact(char* cont){strcpy(contact,contact);}
    void setQuantity(char* quantiy){quantity= quantity;}


    char* get_name_of_user()
    {
        return name_ofUser;
    }
    char* get_book_name()
    {
        return bookName;
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
    int get_quantity()
    {
        return quantity;
    }
    int login_user();
    int reset_pass();
    void search_a_book();

    ~Liberary();
};

#endif