#pragma once

class Bag
{
private:
	static const int CAPACITY = 100;	  // max # of items
	int data[CAPACITY];				          // array of items
	int used;						                // # of items contained

public:
	typedef int value_type;

	Bag();							// constructor
	void insert(value_type entry);			// insert an item
	int count(value_type target);			  // count occurences of an item
	bool removeOne(value_type target);	// remove a single occurence
	void display();					            // show the bag contents
	int removeAll(value_type target);		// remove all occurences
	int size();						              // return # of items
};