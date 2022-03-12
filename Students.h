#ifndef STUDENTS_H
#define STUDENTS_H
#include "Library.h"
#include<string>
using namespace std;
class Students : public Liberary
{
    private:
    char name_of_student[50];
    char date_of_birth[10];
    char name_of_ID_proof[20];
    char ID_number[10];
    char contact[12];
    char user_ID[20];
    char password[20];
    public:
    Students();
    void set_name_of_student(char* name){strcpy(name_of_student,name);}
    void set_date_of_birth(char* dob){strcpy(date_of_birth,dob);}
    void set_name_of_ID(char* ID){strcpy(name_of_ID_proof, ID);}
    void set_IDnumber(char* id_num){strcpy(ID_number, id_num);}
    void set_contact(char* conatct){strcpy(contact , contact);}
    void set_userID(char* userid){strcpy(user_ID, userid);}
    void set_password(char* pass){strcpy(password,pass);}

    char* get_name_of_student()
    {
        return name_of_student;
    }
    char* get_date_of_birth()
    {
        return date_of_birth;
    }
    char* get_name_of_ID()
    {
        return name_of_ID_proof;
    }
    char* get_ID_num()
    {
        return ID_number;
    }
    char* get_contact()
    {
        return contact;
    }
    char* get_userid()
    {
        return user_ID;
    }
    char* get_password()
    {
        return password;
    }

    int new_student_registration();
    void issue_a_book();
    void return_a_book();
    ~Students();
};

#endif 