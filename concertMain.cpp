// concert.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "concert.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;


int main()
{
	tm date1 = { 0,0,0,1,1,1 };
	tm date2 = { 0,0,0,2,2,2 };
	concert test1 = concert("test1", date1);
	concert test2 = concert("test2", date2);

	bool test = test1 < test2;

	if (test == true)
	{
		cout << "true\n";
	}

	if (test == false)
	{
		cout << "false\n";
	}

	test = test2 < test1;

	if (test == true)
	{
		cout << "true\n";
	}

	if (test == false)
	{
		cout << "false\n";
	}
	
	return 0;
}

