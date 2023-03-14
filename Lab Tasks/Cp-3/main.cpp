
#include "sortedtype.cpp"
#include <iostream>
using namespace std;

int main()
{

    SortedType<int> list;

    cout << "Length of list: " << list.LengthIs() << endl;

    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(4);
    list.InsertItem(2);
    list.InsertItem(1);

    cout << "Contents of list: ";
    list.ResetList();
    for (int i = 0; i < list.LengthIs(); i++)
    {
        list.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    int item = 6;
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

    int item = 5;
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

    if (list.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;


    item = 1;
    list.DeleteItem(item);


    cout << "Contents of list: ";
    list.ResetList();
    for (int i = 0; i < list.LengthIs(); i++)
    {
        list.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    if (list.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;


    return 0;
}
