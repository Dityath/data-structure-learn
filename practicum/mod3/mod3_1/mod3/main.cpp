#include "catalog.h"

//Ditya Athallah
//1301194095

using namespace std;

int main()
{
    //variableInitiation
    catalog storage;
    storage.max=8;
    storage.num=-1;

    //adddata&Output
    add_data(storage, 6);
    view_data(storage);
    add_data(storage, 4);
    view_data(storage);
    add_data(storage, 8);
    view_data(storage);
    add_data(storage, 2);
    view_data(storage);
    cout<<endl;

    //searchindex
    int i;
    i=search_data(storage,8);
    cout<<i<<endl;
    i=search_data(storage,5);
    cout<<i<<endl;
}
