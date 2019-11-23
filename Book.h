#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include<Page.h>

class Book
{
public:
    Book();
    bool insertPage(string data);
    string searchPage(int page);
    void showBook();
private:
    Page *first;
    Page *last;
    Page* getPage(int page);
    Page *getPrevPage(int page);
    bool checkPage(int page);
    int cont;
};

#endif // BOOK_H
