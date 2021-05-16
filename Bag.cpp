#include "Bag.h"
#include <iostream>

Bag::Bag()							        // constructor
{
	used = 0;
}

void Bag::insert(int entry)			// insert an item
{
	if (used < CAPACITY)
	{
		data[used] = entry;
		used++;
	}
}

int Bag::count(int target)			// count occurences of an item
{
	int counter = 0;

	for (int i = 0; i < used; i++)
		if (data[i] == target)
			counter++;

	return counter;
}

bool Bag::removeOne(int target)		// remove a single occurence
{
	for (int i = 0; i < used; i++)
		if (data[i] == target)
		{
			data[i] = data[used - 1];
			used--;
			return true;
		}
	return false;
}

void Bag::display()               // show bag contents
{
	for (int i = 0; i < used; i++)
		std::cout << data[i] << " ";

	std::cout << std::endl;
}

int Bag::removeAll(int target)		// remove all occurences
{
	int counter = 0;
	int newUsed = used;

	for (int i = 0; i < newUsed; i++)
		if (data[i] == target)
		{
			if (data[newUsed - 1] == target) {
				i = 0;
			}
			else {
				data[i] = data[newUsed - 1];
			}
			counter++;
			newUsed--;
		}
	used -= counter;
	return counter;
}

int Bag::size()						        // return # of items
{
	return used;
}