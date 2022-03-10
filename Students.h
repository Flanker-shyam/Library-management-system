#ifndef STUDENTS_H
#define STUDENTS_H
#include "Library.h"
#include<string>
using namespace std;
class Students : public Liberary
{
    private:
    string name_of_student;
    string date_of_birth;
    string name_of_college;
    string address;
    string name_of_ID_proof;
    string ID_number;
    string contact;
    string user_ID;
    string password;
    public:
    Students();
    void set_name_of_student(string name){name_of_student=name;}
    void set_date_of_birth(string dob){date_of_birth=dob;}
    void set_name_of_college(string name_clg){name_of_college=name_clg;}
    void set_address(string addr){address=addr;}
    void set_name_of_ID(string ID){name_of_ID_proof= ID;}
    void set_IDnumber(string id_num){ID_number= id_num;}
    void set_contact(string conatct){contact = contact;}
    void set_userID(string userid){user_ID= userid;}
    void set_password(string pass){password=pass;}

    string get_name_of_student()
    {
        return name_of_student;
    }
    string get_date_of_birth()
    {
        return date_of_birth;
    }
    string get_name_of_college()
    {
        return name_of_college;
    }
    string get_address()
    {
        return address;
    }
    string get_name_of_ID()
    {
        return name_of_ID_proof;
    }
    string get_ID_num()
    {
        return ID_number;
    }
    string get_contact()
    {
        return contact;
    }
    string get_userid()
    {
        return user_ID;
    }
    string get_password()
    {
        return password;
    }

    int new_student_registration();
    // int new_student_registration(string name, string dob, string college, 
    //                            string address, string name_of_id, string ID_num, string user_ID, string pass);
    void issue_a_book();
    void return_a_book();
    ~Students();
};

#endif 