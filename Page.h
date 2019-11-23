#ifndef PAGE_H
#define PAGE_H
#include<iostream>
using namespace std;

class Page
{
public:
    Page();
    Page(string data, int page);
    Page *getNext() const;
    void setNext(Page *value);

    string getData() const;
    void setData(const string &value);

    int getPage() const;
    void setPage(int value);

private:
    int page;
    string data;
    Page* next;
};

#endif // PAGE_H
