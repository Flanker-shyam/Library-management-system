#include "Students.h"
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

// int Students:: new_student_registration(string name, string dob, string college, 
//                                string address, string name_of_id, string ID_num, string user_ID, string pass)
int Students::new_student_registration()
{
    string Name, DOB, College, Address, Nameofid, idNUM,mobile, UserID, Pass;

    string name= get_name_of_student();
    string dob= get_date_of_birth();
    string college= get_name_of_college();
    string address= get_address();
    string name_of_id= get_name_of_ID();
    string ID_num = get_ID_num();
    string contact = get_contact();
    string User_ID= get_userid();
    string pass= get_password();
    ifstream fin;
    fin.open("registration_details.txt");
    while(fin>>Name>>DOB>>College>>Address>>Nameofid>>idNUM>>mobile>>UserID>>Pass)
    {
        if(UserID==user_ID&& ID_num== idNUM)
        {
            int forget;
            cout<<"\nAccount is already registered\n";
            cout<<"\nForget Password? Try forget password\n";
            cout<<"\npress 0 to return to the main menu: ";
            cout<<"\npress 1 to reset your password: ";
            cin>>forget;
            return forget;
        }
    }
    while(fin>>Name>>DOB>>College>>Address>>Nameofid>>idNUM>>UserID>>Pass)
    {
  begin:if(UserID==user_ID)
        {
            cout<<"\nUserID already exist\n";
            cout<<"\nTry another userID\n";
            getline(cin, user_ID);
            goto begin;
        }
    }
    ofstream fout1, fout2;
    fout1.open("registration_details.txt", ios::app);
    fout1<<name<<" "<<dob<<" "<<college<<" "<<address<<" "<<name_of_id<<" "<<ID_num<<" "<<user_ID<<" "<<pass<<"\n";
    fout2.open("login_info.txt",ios::app);
    fout2<<user_ID<<" "<<pass<<"\n";
    fout1.close();
    fout2.close();
    return 3;
}                            