#ifndef BOOKS_H
#define BOOKS_H
#include<string.h>
class Books
{
    private:
    char bookName[50];
    int quantity;

    public:
    void setBookName(char* name){strcpy(bookName,name);}
    void setQuantity(int quant){quantity= quant;}
    char* getBookName(){return bookName;}
    int getQuantity(){return quantity;}

    void show_all_books();
    void search_a_book();
    int issue_a_book();
    int return_a_book();
    void add_a_book(char* old_book);
    void remove_a_book(char* new_book);
};

#endif 