#include <iostream>
using namespace std;

#define _ITEMS = 10;

struct ItemType
{
	int key;
};

class unsortedType
{
private:
	int length;
	ItemType info();
public:
	unsortedType();
	bool RetrieveItem(ItemType item);
	bool InsertItem(ItemType item);
	bool DeleteItem(ItemType item);
	void PrintList();
};
