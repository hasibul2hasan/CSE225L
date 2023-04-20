//Task 3
#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

class TimeStamp
{
private:
    int seconds;
    int minutes;
    int hours;

public:
    TimeStamp();

    void insertTime(int s, int m, int h);
    void deleteTime(int s, int m, int h);
    void printTime();
};
template <class ItemType>
class UnsortedType
{
public:
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType &, bool &);
    void ResetList();
    void GetNextItem(ItemType &);

private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

#endif // UNSORTEDTYPE_H_INCLUDED

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