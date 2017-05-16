/*
Author: Peter O'Donohue
Creation Date: 05/15/17
Modification Date: 05/15/17
Purpose: Practice with 2D arrays
*/

// L01Q01.cpp
// from lab 01
// this program searches the array given below and returns to total
// amount of even elements in the array

#include <iostream>
using namespace std;

const int MAX_ROWS = 3;  // stores number of array rows
const int MAX_COLUMNS = 2;  // stores number of array columns

// function protoypes
void exitMessage();
void greetingMessage(int nums[MAX_ROWS][MAX_COLUMNS], int length, int width);
int findEvenElements(int nums[MAX_ROWS][MAX_COLUMNS], int length, int width);

/*
Author: Peter O'Donohue
Creation Date: 05/15/17
Modification Date: 05/15/17
Purpose: main funciton
*/
int main()
{
	int numOfEvens = 0; // stores the number of even integers
	int A[MAX_ROWS][MAX_COLUMNS] = { {3, 2} , {4, 5} , {2, 2} };  // define array

	greetingMessage(A, MAX_ROWS, MAX_COLUMNS);  // print greeting message
	numOfEvens = findEvenElements(A, MAX_ROWS, MAX_COLUMNS); // compute evens
	cout << "The amount of even integers contained within the array is: "
		 << numOfEvens << endl << endl;
	exitMessage();  // print exit message
	system("pause"); // REMOVE
	return 1;
}

/*
Author: Peter O'Donohue
Creation Date: 05/15/17
Modification Date: 05/15/17
Purpose: display greeting message
*/
void greetingMessage(int nums[MAX_ROWS][MAX_COLUMNS], int length, int width)
{
	cout << "Hello, this program searches the array below " << endl
		 << "and returns the number of even elements" << endl
		 << "contained within it." << endl << endl
		 << "{ ";

	// print each array element
	for (int i = 0; i < length; ++i)
	{
		cout << "{";
		for (int j = 0; j < width; ++j)
		{
			cout << nums[i][j];
			if (j == 1)
				cout << "} ";
			else
				cout << " , ";
		}
		if (i < length - 1)
			cout << ", ";
	}
	cout << "}" << endl << endl;
	return;
}

/*
Author: Peter O'Donohue
Creation Date: 05/15/17
Modification Date: 05/15/17
Purpose: exit message
*/
void exitMessage()
{
	cout << "Thanks for using my program, goodbye." << endl;
}

/*
Author: Peter O'Donohue
Creation Date: 05/15/17
Modification Date: 05/15/17
Purpose: compute number of even elements
*/
int findEvenElements(int nums[MAX_ROWS][MAX_COLUMNS], int length, int width)
{
	int tempEvenAmount = 0;
	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < width; ++j)
		{
			if ((nums[i][j] % 2 == 0) && (nums[i][j] != 0))
				++tempEvenAmount;
		}
	}
	return tempEvenAmount;
}