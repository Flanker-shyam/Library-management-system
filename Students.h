#ifndef STUDENTS_H
#define STUDENTS_H
#include "Library.h"
#include<string.h>
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
    Students()
    {
        strcpy(name_of_student,"default");
        strcpy(date_of_birth,"00/00/0000");
        strcpy(name_of_ID_proof,"default");
        strcpy(ID_number,"00000000");
        strcpy(contact,"0000000000");
        strcpy(user_ID,"default");
        strcpy(password,"default");
    }

    void set_name_of_student(char* name){strcpy(name_of_student,name);}
    void set_date_of_birth(char* dob){strcpy(date_of_birth,dob);}
    void set_name_of_ID(char* ID){strcpy(name_of_ID_proof, ID);}
    void set_IDnumber(char* id_num){strcpy(ID_number, id_num);}
    void set_contact(char* cont){strcpy(contact , cont);}
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
};

#endif 