//Task 3

#include <iostream>
#include "unsortedtype.cpp"

using namespace std;

int main()
{

    TimeStamp timeArray[5];

    timeArray[0].insertTime(23, 34, 15);
    timeArray[1].insertTime(2, 13, 13);
    timeArray[2].insertTime(43, 45, 12);
    timeArray[3].insertTime(25, 36, 17);
    timeArray[4].insertTime(52, 02, 20);

    for (int i = 0; i < 5; i++)
    {
        timeArray[i].deleteTime(43, 45, 12);
    }

    for (int i = 0; i < 5; i++)
    {
        timeArray[i].printTime();
    }

    return 0;
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