#include "Book.h"

Book::Book()
{
    this->cont = 0;
    this->first = nullptr;
    this->last = nullptr;
}

bool Book::insertPage(string data)
{
    Page* temp = new Page(data,cont);
    if(first == nullptr){
        first = temp;
        last = temp;
        cont+=1;
        return true;
    }
    this->last->setNext(temp);
    this->last = temp;
    cont+=1;
    return true;
}

string Book::searchPage(int page)
{
    if(!checkPage(page)){
        return "Doesnt exist";
    }
    Page* temp = this->first;
    while (temp) {
        if(temp->getPage() == page){
            return temp->getData();
        }
        temp = temp->getNext();
    }
    return "Doesnt exist";
}

void Book::showBook()
{
    Page* temp = first;
    while (temp) {
        cout<<temp->getData()<<endl;
        cout<<temp->getPage()<<endl;
        temp = temp->getNext();
    }
}

Page *Book::getPage(int page)
{
    if(!checkPage(page)){
        return nullptr;
    }
    Page* temp = this->first;
    while (temp) {
        if(temp->getPage() == page){
            return temp;
        }
        temp = temp->getNext();
    }
    return nullptr;
}

Page *Book::getPrevPage(int page)
{
    if(!checkPage(page)){
        return nullptr;
    }
    Page* temp = this->first;
    while (temp) {
        if(temp->getNext()->getPage() == page){
            return temp;
        }
        temp = temp->getNext();
    }
    return nullptr;
}

bool Book::checkPage(int page)
{
    if(page<0 || page>cont-1){
        return false;
    }
    return true;
}
