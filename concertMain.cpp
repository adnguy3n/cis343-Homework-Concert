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

	//Integer to hold number of concerts.
	int size;

	//10 concert objects to test sorting.
	
	//Has default values except for name.
	concert concert0 = concert("concert0");
	//Has default values except for name and desire.
	concert concert1 = concert("concert1", 9);
	//2 and 3 are for testing concerts with the same values
	concert concert2 = concert("concert2", 7);
	concert concert3 = concert("concert3", 7);
	//4 through 9 takes place at a later date than the previous concerts.
	concert concert4 = concert("concert4", { 0,0,0,2,2,2 });
	concert concert5 = concert("concert5", { 0,0,0,6,2,2 });
	concert concert6 = concert("concert6", { 0,0,0,1,1,2 });
	concert concert7 = concert("concert7", { 0,0,0,9,5,3 });
	concert concert8 = concert("concert8", { 0,0,0,1,2,6 });
	concert concert9 = concert("concert9", { 0,0,0,8,7,3 });
	
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

	size = concerts.size();

	//Sorting concerts by date and desire.

	return 0;
}

