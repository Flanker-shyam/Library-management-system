#include<iostream>
#include<fstream>
#include "Library.h"
#include "Students.h"
#include "Librarian.h"
using namespace std;

int main()
{
    Liberary liberary;
    Liberarian L1;
    Students s1;
    cout<<"\n              Welcome to State Liberary                \n";
    cout<<"\n                      Menu                             \n";
    cout<<"\n1. Liberarian \n2. Student  \n3. Exit\n";
    int choice;
    cin>>choice;

//liberary functipn registration call 

    if(choice==1)
    {
        // string name;
        // cout<<"\nEnter your name: ";
        // cin>>name;
        // cout<<"Hello, "<<name<<" Welcome to State Liberary"<<endl;
        // start: cout<<"\nKindly choose an option from the below menu\n";
        // cout<<"\n1. New Registration \n2. Login \n3. Return to main menu\n";
        // int opt;
        // cin>>opt;
        // if(opt==1)
        // {
        //     string name, dob, college, address,name_of_id, idNum, userID, password;
        //     cout<<"\n                    New Registration                  \n";
        //     cout<<"\nEnter your name: ";
        //     getline(cin,name);
        //     cout<<"\nEnter your Date of birth in dd/mm/yyy format: ";
        //     cin>>dob;
        //     cout<<"\nEnter the name of your college: ";
        //     getline(cin,college);
        //     cout<<"\nEnter your address: ";
        //     getline(cin,address);
        //     cout<<"\nEnter your Id proof: ";
        //     cin>>name_of_id;
        //     cout<<"\nEnter Id number : ";
        //     getline(cin,idNum);
        //     cout<<"\nCreate a user ID: ";
        //     cin>>userID;
        //     cout<<"\nCreate a password: ";
        //     cin>>password;
        //     s1.set_name_of_student(name);

        //     int out= s1.new_student_registration(name, dob, college, address, name_of_id, idNum,  userID, password);
        //     if(out==0)
        //     {
        //         cout<<"\nPress Enter to exit\n";
        //         return 0;
        //     }
        //     else if(out==1)
        //     {
        //         goto start;
        //     }
        //     else if(out==3)
        //     {
        //         cout<<"\nCongratulations, Your Registration is successful\n";
        //     }
        //     L1.new_liberarian_registration();
        // }
        // else if(opt==2)
        // {
        //     string userid, pass;
        //     liberary.login_user(userid, pass);
        // }
        // else if(opt==3)
        // {
        //     main();
        // }
        // else
        // {
        //     cout<<"\nEnter a valid choice\n";
        //     goto start;
        // }
    }

    //student's registration call 
    else if(choice==2)
    {
        string name;
        cout<<"\nEnter your name: ";
        cin>>name;
        cout<<"Hello, "<<name<<" Welcome to State Liberary"<<endl;
        start1: cout<<"\nKindly choose an option from the below menu\n";
    reg:cout<<"\n1. New Registration \n2. Login \n3. Return to main menu\n";
        int opt;
        cin>>opt;
        if(opt==1)
        {
            string name, dob, college, address,name_of_id, idNum, userID, password,contact;
            cout<<"\n                    New Registration                  \n";


            cout<<"\nEnter your name: ";
            getline(cin,name);

            s1.set_name_of_student(name);

            cout<<"\nEnter your Date of birth in dd/mm/yyy format: ";
            cin>>dob;

            s1.set_date_of_birth(dob);
            cin.get();
            cout<<"\nEnter the name of your college: ";
            getline(cin,college);
            s1.set_name_of_college(college);

            cout<<"\nEnter your address: ";
            getline(cin,address);
            s1.set_address(address);

            cout<<"\nEnter your Id proof: ";
            cin>>name_of_id;
            s1.set_name_of_ID(name_of_id);

            cin.get();

            cout<<"\nEnter Id number : ";
            getline(cin,idNum);
            s1.set_IDnumber(idNum);

            cout<<"Enter your contact number: ";
            cin>>contact;
            s1.set_contact(contact);

            cin.get();

            cout<<"\nCreate a user ID: ";
            cin>>userID;
            s1.set_userID(userID);

            cout<<"\nCreate a password: ";
            cin>>password;
            s1.set_password(password);

            int out= s1.new_student_registration();
            
            // s1.new_student_registration(name, dob, college, address, name_of_id, idNum,  userID, password);
            if(out==0)
            {
                cout<<"\nPress Enter to exit\n";
                return 0;
            }
            else if(out==1)
            {
                goto reg;
            }
            else if(out==3)
            {
                cout<<"\nCongratulations, Your Registration is successful\n";
            }
        }
        else if(opt==2)
        {
            int choose;
            cout<<"\nTry login, press 1 to login\n";
            cout<<"Press 0 to exit\n";
            cin>>choose;
            if(choose)
            {
                string userid, password;
                cout<<"\nEnter your userID: ";
                cin>>userid;
                cout<<"\nEnter you password: ";
                cin>>password;
                int ret= liberary.login_user();

            }
            else
            {
                return 0;
            }
        }
        else if(opt==3)
        {
            main();
        }
        else
        {
            cout<<"\nEnter a valid choice\n";
            goto start1;
        }
    }
}