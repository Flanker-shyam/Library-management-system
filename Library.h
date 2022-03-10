#ifndef LIBRARY_H
#define LIBRARY_H
#include<queue>
#include<string>
using namespace std;

class Liberary
{
    private:
    string name_ofUser;
    string bookName;
    string userid;
    string password;
    string contact;
    int quantity=0;

    public:
    Liberary();

    void set_name_of_user(string name){name_ofUser=name;}
    void setbookName(string bname){bookName=bname;}
    void setUserid(string userid){userid=userid;}
    void setPassword(string pass){password=pass;}
    void setContact(string contact){contact=contact;}
    void setQuantity(string quantiy){quantity= quantity;}


    string get_name_of_user()
    {
        return name_ofUser;
    }
    string get_book_name()
    {
        return bookName;
    }
    string getUserid()
    {
        return userid;
    }
    string getPassword()
    {
        return password;
    }
    string get_contact()
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