//Task 3

#include "UnsortedType.h"

using namespace std;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}
template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}
template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos = -1;
}
template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType &
                                             item)
{
    currentPos++;
    item = info[currentPos];
}
template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType &
                                              item,
                                          bool &found)
{
    int location = 0;
    bool moreToSearch = (location < length);
    found = false;
    while (moreToSearch && !found)
    {
        if (item == info[location])
        {
            found = true;
            item = info[location];
        }
        else
        {
            location++;
            moreToSearch = (location < length);
        }
    }
}
template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType
                                            item)
{
    info[length] = item;
    length++;
}

template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    int location = 0;
    while (item != info[location])
        location++;
    info[location] = info[length - 1];
    length--;
}

TimeStamp::TimeStamp()
{
    seconds = 0;
    minutes = 0;
    hours = 0;
}

void TimeStamp::insertTime(int s, int m, int h)
{
    seconds = s;
    minutes = m;
    hours = h;
}

void TimeStamp::deleteTime(int s, int m, int h)
{
    if (seconds == s && minutes == m && hours == h)
    {
        seconds = 0;
        minutes = 0;
        hours = 0;
    }
}

void TimeStamp::printTime()
{
    cout << hours << ":" << minutes << ":" << seconds << " " << endl;
}

/*
3. [Hints: take help from unsorted list (array) lab manual. Column size fixed, three] Write a 
class  TimeStamp  that  represents  a  time  of  the  day.  It  must  have  variables  to  store  the 
number of seconds, minutes and hours passed. It must have functions insertTime to insert 
data,  DeleteTime  to  delete  data  with  specific  timestamp.  It  also  must  have  a  function  to 
print all the values. Perform the following task in driver file: 
○ Create a list of objects of class TimeStamp 
○ Insert 5 time values in the format hhmmss (don’t take input from user) 15 34 23  13 13 02  12 45 43 17 36 25 20 02 52  
○ Delete the timestamp 12 45 43 
○ Print the list 15:34:23  13:13:02  12:45:43 17:36:25 20:02:52 
*/