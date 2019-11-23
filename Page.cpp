#include "Page.h"

Page::Page()
{

}

Page::Page(string data, int page)
{
    this->data = data;
    this->page = page;
    this->next = nullptr;
}

Page *Page::getNext() const
{
    return next;
}

void Page::setNext(Page *value)
{
    next = value;
}

string Page::getData() const
{
    return data;
}

void Page::setData(const string &value)
{
    data = value;
}

int Page::getPage() const
{
    return page;
}

void Page::setPage(int value)
{
    page = value;
}
