#include<iostream>
#include "quetype.cpp"

using namespace std;

int main()
{
    int temp;
    QueType<int>q,t;

    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);

cout<<"Elements are:" << endl;

    while(!q.IsEmpty())
    {
        q.Dequeue(temp);
        cout<<temp<< endl;
        t.Enqueue(temp);
    }
    while(!t.IsEmpty()){
        t.Dequeue(temp);
        q.Enqueue(temp);

    }

    return 0;


}
