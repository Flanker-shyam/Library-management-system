#include<iostream>
#include<fstream>
#include<stdlib.h>
#include "Library.h"
#include "Students.h"
#include "Librarian.h"
using namespace std;

int Librarian_menu()
{
    int option;
    cout<<"\nChoose an option: ";
    cout<<"\n1. Add a Book \n2. Remove a book \n3. search a book \n4. show all books \n5. Reset account \n6. Exit\n";
    cin>>option;
    return option;
}

int Student_menu()
{
    int option;
    cout<<"\nchoose an option: ";
    cout<<"\n1. Search a Book \n2. Show all books \n3. Issue a book \n4. Return a book \n5. Exit\n";
    cin>>option;
    return option;
}

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

    switch(choice)
    {
        case 1:
        {   ///first ask the librarian to login, if he/she do successful login then move ahead with the menu 
     login: if(L1.login_user())
            {
                while(true)
                {
                    system("cls");
                    switch(Librarian_menu())
                    {
                        case 1:
                        {

                        }
                        case 2:
                        {

                        }
                        case 3:
                        {

                        }
                        case 4:
                        {

                        }
                        case 5:
                        {

                        }
                        case 6:
                        {
                            cout<<"\nExit command\n";
                            exit(0);
                        }
                        default:
                        {
                            cout<<"\nEnter a valid choice\n";
                        }
                    }
                }
            }
            else
            {
                cout<<"\nWrong userid or password try again\n";
                goto login;
            }
            ///For liberarian
        }

        case 2:
        {
            int opt;
      menu: cout<<"\n1. New Registration \n2. Login \n3. Exit\n";
            cin>>opt;
            if(opt==1)
            {               //ask student for registration 
                if(s1.new_student_registration())
                {
                    cout<<"\nRegistration Successful\n";
                    goto menu;
                }
                else
                {                        //if registration unsuccesfull reset/ return  
                    int n;
                    cout<<"\nRegistration details already exist\n";
                    cout<<"forget password? press 1 to reset account\n";
                    cout<<"\npress 2 to return to the main manu\n";
                    cin>>n;
                    if(n==1){s1.reset_pass();}
                    else
                    {
                        goto menu;
                    }
                }
            }

            else if(opt==2)
            {   //student login after which the full menu will be presented to the student 
     stu_login: if(s1.login_user())
                {
                    while(true)
                    {
                    switch(Student_menu())
                    {
                        case 1:
                        {

                        }
                        case 2:
                        {

                        }
                        case 3:
                        {

                        }
                        case 4:
                        {

                        }
                        case 5:
                        {
                            cout<<"\nExit command\n";
                            exit(0);
                        }
                        default:
                        {
                            cout<<"\nEnter a valid choice\n";
                        }
                    }
                    }
                }
                else
                {                             //if login is unsuccessful then three options reset/ try again/return to main 
                    int opt;
                    cout<<"\nLogin unsuccessful";
                    cout<<"\nTry login again?? press 1: ";
                    cout<<"\nForget password?? press 2 to reset account: ";
                    cout<<"\nPress 3 to return to the main manu: ";
                    cin>>opt;
                    if(opt==1)
                    {
                        goto stu_login;
                    }
                    else if(opt==2)
                    {
                        s1.reset_pass();
                    }
                    else
                    {
                        goto menu;
                    }
                }
            }
            //for Students
        }

        case 3:
        {
            cout<<"\nExit command\n";
            exit(0);
            //exit
        }
        default:
        {
            cout<<"\nEnter a valid choice\n";
        }
    }
    return 0;
}