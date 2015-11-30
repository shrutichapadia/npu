 //Implementation of sorted list:
//Header:
sorted.h
#define MAX_ITEMS = 10;
struct ItemType
{
	int key;
};

class SortedType
{
private:
	int length;
	ItemType info[MAX_ITEMS];
public:
	SortedType();
	bool RetrieveItem(ItemType item);
	bool InsertItem(ItemType item);
	bool DeleteItem(ItemType item);
	void PrintList();
};
