#include <iostream>
#include<Book.h>
#include <sstream>
using namespace std;

int main()
{
    Book book;
    int opc,page;

    while (opc != -1) {
        cout<<"1.-Add Page"<<endl;
        cout<<"2.-Show Page"<<endl;
        cout<<"3.-Show Book"<<endl;
        cout<<"\t -1 salir"<<endl;
        cin>>opc;
        switch (opc) {
        case 1:{
            cout<<"Ingresa el texto: \t ^:para terminar una pagina "<<endl;
            char c;
            cin.get(c);
            stringstream ss;
            while(cin.get(c) && c!= 94){
                ss<<c;
            }
            cin.ignore();
            book.insertPage(ss.str());
            break;
        }
        case 2:{
            cout<<"Ingrese el numero de pagina a visualizar"<<endl;
            cin>>page;
            cout<<book.searchPage(page)<<endl;
            break;
        }
        case 3:{
            book.showBook();
            break;
        }
        default:
            break;
        }

    }

}

