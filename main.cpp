/*
--------------------------------------------------------------------
* Name:       Stan Turovsky
* Class:      Advanced C++
* Files:      main.cpp, Bag.cpp, Bag.h
* Purpose:    Program to test the Bag class
--------------------------------------------------------------------
*/

// Preprocessor directives
#include <iostream>
#include "Bag.h"
using namespace std;

// main function
int main()
{
	Bag myBag;

	myBag.insert(24);           // Put some numbers in the bag
	myBag.insert(322);
	myBag.insert(6);
	myBag.insert(8);
	myBag.insert(5);
	myBag.insert(6);
	myBag.insert(7);
	myBag.insert(5);

	myBag.display();            // Show bag's contents
	cout << "Size: " << myBag.size() << endl;

	/*cout << "Count of 6: " << myBag.count(6) << endl;
	cout << "Count of 322: " << myBag.count(322) << endl;

	myBag.removeOne(6);
	cout << "Removed 6 " << endl;
	myBag.display();

	cout << "Count of 6: " << myBag.count(6) << endl;
	cout << "Size: " << myBag.size() << endl;
	cout << "Count of 5: " << myBag.count(5) << endl;

	cout << "Adding two 5's " << endl;
	myBag.insert(5);
	myBag.insert(5);
	myBag.display();

	cout << "Count of 5: " << myBag.count(5) << endl;
	cout << "Size: " << myBag.size() << endl;

	cout << "Remove all 5's " << endl;
	myBag.removeAll(24);
	myBag.display();

	cout << "Count of 24: " << myBag.count(5) << endl;
	cout << "Size: " << myBag.size() << endl;*/

	int choice = 0;
	int number = 0;

	do
	{
		cout << "Choose command:" << endl;
		cout << " 1.  Add #" << endl;
		cout << " 2.  Remove #" << endl;
		cout << " 3.  Remove All #" << endl;
		cout << " 4.  End Program" << endl;

		cin >> choice;                    // accept user's input

		switch (choice)
		{
		case 1:
			cout << "# to add?" << endl;
			cin >> number;
			myBag.insert(number);
			break;
		case 2:
			cout << "# to remove?" << endl;
			cin >> number;
			myBag.removeOne(number);
			break;
		case 3:
			cout << "# to remove all of?" << endl;
			cin >> number;
			myBag.removeAll(number);
			break;
		case 4:
			cout << "Exiting..." << endl;
			break;
		default:
			cout << "ERROR:  Invalid option." << endl;
			break;
		}
		myBag.display();
		cout << "Count of " << number << ": " << myBag.count(number) << endl;
		cout << "Size: " << myBag.size() << endl;

	} while (choice != 4);

	// Leave this stuff at the end.
	cout << endl;
	// system("pause");
	return 0;
}
