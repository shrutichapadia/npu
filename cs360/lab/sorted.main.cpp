//Main:

#include <iostream>
#include "sorted.h"
using namespace std;

int main()
{
	SortedType info;
	ItemType item;
	int number;
	while (1)
	{
		cout << "Please enter a key to insert or insert 00 to exit: ";
		cin >> number;
		if (number == 00)
			break;
		item.key = number;
		info.InsertItem(item);
	}
	cout << "\nElements in the list are:\n";
	info.PrintList();
	while (1)
	{
		cout << "\nPlease enter a key for searching or 00 to exit: ";
		cin >> number;
		if (number == 00)
			break;
		item.key = number;
		if (info.RetrieveItem(item))
			cout << " " << item.key;
		else
			cout << "Key: " << item.key << " not found." << endl;
	}
	while (1)
	{
		cout << "\nPlease enter a key for deletion or 00 to exit: ";
		cin >> number;
		if (number == 00)
			break;
		item.key = number;
		info.DeleteItem(item);
	}
	cout << "\nElements in the list are:\n";
	info.PrintList();
	return 0;
}
