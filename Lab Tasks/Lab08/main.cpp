#include "stacktype.cpp"
#include <iostream>
using namespace std;

int main()
{
    //Create a.stack object
    StackType<int> s;
    StackType<int> t;
    int temp;
    //Check if the stack is empty
    if(s.IsEmpty())
        cout <<"Stack id Empty"<<endl;
    else
        cout <<"Stack is not Empty"<<endl;

    //insert 4 items
    s.push(5);
    s.push(7);
    s.push(4);
    s.push(3);
    //Check if the stack is full
    if(s.IsEmpty())
        cout <<"Stack id Full"<<endl;
    else
        cout <<"Stack is not Full"<<endl;


//insert
    s.Push(3);
    while(!s.IsEmpty())
    {
        temp == s.Top();
        t.Push(temp);
        s.Pop();

    }
    while (!t.IsEmpty())
    {

        temp =t.Top();
        cout<<temp<<"";
        s.Push(temp);
        t.Pop();


    }


}

