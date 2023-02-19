//Mine
#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
int value:
    dynArr dr;
    dynArr dr2(5);

    for(int i=0; i<5; i++)
    {
        cin>> value;
        dr2.setValue(i,value);
    }
    cout<<"Display the array element"<< endl;
    for (int i=0; i <5; i++)
    {
    cout<<dr2.getValue(i);
    }
}
