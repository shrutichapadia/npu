//Implementation:

#include <iostream>
#include "sorted.h"
using namespace std;

SortedType::SortedType()
{
 length = 0;
}
bool SortedType::RetrieveItem(ItemType item)
{
 int first = 0;
 int last = length - 1;
 int middle;
 while (first <= last)
 {
   middle = (first + last) / 2;
   if (info[middle].key > item.key)
     last = middle - 1;
   else if (info[middle].key < item.key)
     first = middle + 1;
   else
     return true;
 }
 return false;
}
bool SortedType::InsertItem(ItemType item)
{
 int location = 0; if (length == MAX_ITEMS - 1)
   return false;
 while (location < length && item.key > info[location].key)
 {
   location++;
 }
 for (int index = length; index > location; index--)
   info[index] = info[index - 1];
 info[location] = item;
 length++;
 return true;
}
bool SortedType::DeleteItem(ItemType item)
{
 int location = 0;
 while (location < length && item.key != info[location].key)
   location++;
 if (location == length)
   return false;
 for (int index = location + 1; index < length; index++)
   info[index - 1] = info[index];
 length--;
 return true;
}
void SortedType::PrintList() {
 for (int index = 0; index < length; index++)
   cout << " " << info[index].key;
}
