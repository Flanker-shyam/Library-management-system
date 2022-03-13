#include "Students.h"
#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;

int Students::new_student_registration()
{
    char name[50],dob[10],idname[20], IDnum[10], cont[12], user[20],pass[20];
    cout<<"\nEnter your name: ";
    cin.getline(name,50);
    cout<<"\nEnter your date of birth in (dd/mm/yyyy) format: ";
    cin.getline(dob,10);
    cout<<"\nEnter the ID proof: ";
    cin.getline(idname,20);
    cout<<"\nEnter ID number: ";
    cin.getline(IDnum,10);
    cout<<"\nEnter your contact number: ";
    cin.getline(cont,12);
    cout<<"\nCreate a username: ";
    cin.getline(user,20);
    cout<<"\nCreate a password: ";
    cin.getline(pass,20);
    set_name_of_student(name);
    set_date_of_birth( dob);
    set_name_of_ID( idname);
    set_IDnumber( IDnum);
    set_contact( cont);
    set_userID( user);
    set_password( pass);

    ofstream fout;
    fout.open("Registration_details.txt", ios::out | ios:: binary | ios:: app);
    fout.write((char*)this , sizeof(*this));
    fout.close();

    ofstream fout;
    fout.open("login_info.txt",ios::out| ios::binary | ios:: app);
    fout<<user<<" "<<pass<<endl;
    fout.close();
}
                        