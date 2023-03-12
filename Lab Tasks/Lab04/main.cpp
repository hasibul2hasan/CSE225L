#include "unsortedtype.cpp"
#include <iostream>
using namespace std;

int main()
{
    UnsortedType<int> list;
    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(6);
    list.InsertItem(9);

    cout << "Length of list: " << list.LengthIs() << endl;


    int item = 7;
    bool found;
    list.RetrieveItem(item, found);
    if (found)
    {
        cout << "Item " << item << " found in list" << endl;
    }
    else
    {
        cout << "Item " << item << " not found in list" << endl;
    }


    item = 2;
    list.DeleteItem(item);


    cout << "Contents of list: ";
    list.ResetList();
    for (int i = 0; i < list.LengthIs(); i++)
    {
        list.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
