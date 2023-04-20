#include <iostream>
#include "UnsortedType.h"

using namespace std;

void MergeLists(UnsortedType<int>& list1, UnsortedType<int>& list2, UnsortedType<int>& mergedList)
{
    int item1, item2;
    bool finished1 = false, finished2 = false;
    list1.ResetList();
    list2.ResetList();

    list1.GetNextItem(item1);
    list2.GetNextItem(item2);

    while (!finished1 && !finished2)
    {
        if (item1 < item2)
        {
            mergedList.InsertItem(item1);
            list1.GetNextItem(item1);
            if (item1 == NULL)
                finished1 = true;
        }
        else
        {
            mergedList.InsertItem(item2);
            list2.GetNextItem(item2);
            if (item2 == NULL)
                finished2 = true;
        }
    }

    while (!finished1)
    {
        mergedList.InsertItem(item1);
        list1.GetNextItem(item1);
        if (item1 == NULL)
            finished1 = true;
    }

    while (!finished2)
    {
        mergedList.InsertItem(item2);
        list2.GetNextItem(item2);
        if (item2 == NULL)
            finished2 = true;
    }
}

int main()
{
    int arr1[] = { 1, 5, 6, 10, 14, 20, 25, 31, 38, 40 };
    int arr2[] = { 2, 4, 7, 9, 16, 19, 23, 24, 32, 35, 36, 42 };
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);

    UnsortedType<int> list1;
    UnsortedType<int> list2;
    UnsortedType<int> mergedList;

    for (int i = 0; i < len1; i++)
    {
        list1.InsertItem(arr1[i]);
    }

    for (int i = 0; i < len2; i++)
    {
        list2.InsertItem(arr2[i]);
    }

    MergeLists(list1, list2, mergedList);

    mergedList.ResetList();
    int item;
    while (mergedList.LengthIs() != 0)
    {
        mergedList.GetNextItem(item);
        cout << item << " ";
    }

    return 0;
}