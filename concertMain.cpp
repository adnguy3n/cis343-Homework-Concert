/******************************************************
* A simple program show to show understanding of the 
* basics of writing a class in C++.
*
* Author: Anthony Dat Nguyen
******************************************************/

#include "stdafx.h"
#include "concert.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

/******************************************************
* Main method for testing purposes.
*
* @param none.
*
* @return 0 on successful run.
******************************************************/
int main()
{
	//Vector to hold concert objects.
	vector<concert> concerts;

	//Vector to hold sorted concert objects.
	//vector<concert> sortedConcert; Commented Out

	//Temporary concert object.
	//concert buffer; Commented Out

	//Integer to hold number of concerts.
	int size;

	//10 concert objects to test sorting.
	//Has default values except for name.
	concert concert0 = concert("concert0");
	//Has default values except for name and a higher desire.
	concert concert1 = concert("concert1", 9);
	//2 and 3 are for testing concerts with the same date and desire values.
	concert concert2 = concert("concert2", 7);
	concert concert3 = concert("concert3", 7);
	//4 through 9 takes place at a later date than the previous concerts.
	concert concert4 = concert("concert4", { 0,0,0,9,9,117 });
	concert concert5 = concert("concert5", { 0,0,0,9,9,8 });
	concert concert6 = concert("concert6", { 0,0,0,9,8,8 });
	concert concert7 = concert("concert7", { 0,0,0,8,8,8 });
	concert concert8 = concert("concert8", { 0,0,0,8,8,7 });
	concert concert9 = concert("concert9", { 0,0,0,8,7,7 });
	
	//Adding concert objects to concerts.
	concerts.push_back(concert0);
	concerts.push_back(concert1);
	concerts.push_back(concert2);
	concerts.push_back(concert3);
	concerts.push_back(concert4);
	concerts.push_back(concert5);
	concerts.push_back(concert6);
	concerts.push_back(concert7);
	concerts.push_back(concert8);
	concerts.push_back(concert9);

	/* Commented out code from when I didn't realize that we had to use std::sort.
	//Sorting concerts by date and desire.
	while (!concerts.empty()) 
	{
		//Puts the concert at the back of concerts into the sorted vector 
		//and removes the concert from concerts.
		if (sortedConcert.empty()) {
			sortedConcert.push_back(concerts.back());
			concerts.pop_back();
		}

		//Puts back of concerts into a buffer.
		buffer = concerts.back();

		//Gets the current size of the sorted vector.
		size = sortedConcert.size();
		
		//Compares the concert in the buffer to the concerts in the sorted vector.
		for (int i = 0; i < size; i++) 
		{
			//If the concert in the buffer is before the next concert in
			//the sorted vector, put it at the current location of the sorted
			//vector then break the for loop.
			if (buffer < sortedConcert.at(i))
			{
				sortedConcert.insert(sortedConcert.begin()+i, buffer);
				break;
			}
			//Otherwise continue until the end of the sorted vector is reached.
			//At which, the vector in the buffer is placed at the end.
			else
			{
				if (i == size - 1)
				{
					sortedConcert.push_back(buffer);
				}
			}
		}

		//Remove the concert in the buffer from concerts.
		concerts.pop_back();
	}

	size = sortedConcert.size();

	//Prints out the concerts in order.
	for (int i = 0; i < size; i++)
	{
		cout << sortedConcert.at(i).getConcertName() << "\n";
	}
	*/

	//Sorts concerts.
	sort(concerts.begin(), concerts.end());

	size = concerts.size();

	//Prints out the concerts in order.
	for (int i = 0; i < size; i++)
	{
		cout << concerts.at(i).getConcertName() << " Date:" 
			<< 1 + concerts.at(i).getDate().tm_mon << "/"
			<< concerts.at(i).getDate().tm_mday << "/"
			<< 1900 + concerts.at(i).getDate().tm_year
			<< " Desire: " << concerts.at(i).getDesire()
			<<"\n";
	}

	return 0;
}

