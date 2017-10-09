#include "stdafx.h"
#include "concert.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

/******************************************************
* Default Constructor with no parameters passed.
* Initializes concert with all default values.
*
* @param none.
*
* @return none.
******************************************************/
concert::concert()
{
	setConcertName("Staying Home");
	addFriend("Sad Lonely Times");
	setDesire(1);
	setDate({ 0, 0, 0, 1, 0, 0});
}

/******************************************************
* Constructor that has all of the parameters passed.
* Initializes concert with the given values and no
* default values.
*
* @param string s, the name of the concert; 
* vector f, a list of friends you want to bring;
* int d, how much you want to attend said concert on
* a scale of 1 to 10; tm n, the date of the concert.
* 
* @return none.
******************************************************/
concert::concert(string s, vector<string> f, int d, tm n) 
{
	setConcertName(s);
	setFriend(f);
	setDesire(d);
	setDate(n);
}

/******************************************************
* Constructor that has all but the date parameter passed.
* Initializes concert with the given values and a default
* value for date.
*
* @param string s, the name of the concert; 
* vector f, a list of friends you want to bring;
* int d, how much you want to attend said concert on
* a scale of 1 to 10
* 
* @return none.
******************************************************/
concert::concert(string s, vector<string> f, int d)
{
	setConcertName(s);
	setFriend(f);
	setDesire(d);
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
* Constructor that has all but the friend parameter
* passed. Initializes concert with the given values
* and adds a default value to the friends vector.
*
* @param string s, the name of the concert; 
* int d, how much you want to attend said concert on
* a scale of 1 to 10; tm n, the date of the concert.
* 
* @return none.
******************************************************/
concert::concert(string s, int d, tm n)
{
	setConcertName(s);
	setDesire(d);
	setDate(n);
	addFriend("Sad Lonely Times");
}

/******************************************************
* Constructor that has all bue the desire parameter
* passed. Intiailizes concert with the given values
* and a default value for desire.
* 
* @param string s, the name of the concert; 
* vector f, a list of friends you want to bring;
* tm n, the date of the concert.
* 
* @return none.
******************************************************/
concert::concert(string s, vector<string> f, tm n)
{
	setConcertName(s);
	setFriend(f);
	setDate(n);
	setDesire(1);
}

/******************************************************
* Constructor that has all but the desire and date
* parameters passed. Intiailizes concert with the
* given values and a default value for desire and date.
* 
* @param string s, the name of the concert; 
* vector f, a list of friends you want to bring;
* 
* @return none.
******************************************************/
concert::concert(string s, vector<string> f)
{
	setConcertName(s);
	setFriend(f);
	setDesire(1);
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
* Constructor
* @param
* @return
******************************************************/
concert::concert(string s, int d)
{
	setConcertName(s);
	setDesire(d);
	addFriend("Sad Lonely Times");
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
*
* @param
* @return
******************************************************/
concert::concert(string s, tm n)
{
	setConcertName(s);
	setDate(n);
	addFriend("Sad Lonely Times");
	setDesire(1);
}

/******************************************************
*
* @param
* @return
******************************************************/
concert::concert(string s)
{
	setConcertName(s);
	addFriend("Sad Lonely Times");
	setDesire(1);
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
*
* @param
* @return
******************************************************/
concert::concert(vector<string> f, int d, tm n)
{
	setFriend(f);
	setDesire(d);
	setDate(n);
	setConcertName("Staying Home");
}

/******************************************************
*
* @param
* @return
******************************************************/
concert::concert(vector<string> f, int d)
{
	setFriend(f);
	setDesire(d);
	setConcertName("Staying Home");
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
*
* @param
* @return
******************************************************/
concert::concert(vector<string> f, tm n)
{
	setFriend(f);
	setDate(n);
	setConcertName("Staying Home");
	setDesire(1);
}

/******************************************************
*
* @param
* @return
******************************************************/
concert::concert(vector<string> f)
{
	setFriend(f);
	setConcertName("Staying Home");
	setDesire(1);
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
*
* @param
* @return
******************************************************/
concert::concert(int d, tm n)
{
	setDesire(d);
	setDate(n);
	setConcertName("Staying Home");
	addFriend("Sad Lonely Times");
}

/******************************************************
*
* @param
* @return
******************************************************/
concert::concert(int d)
{
	setDesire(d);
	setConcertName("Staying Home");
	addFriend("Sad Lonely Times");
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
*
* @param
* @return
******************************************************/
concert::concert(tm n)
{
	setDate(n);
	setConcertName("Staying Home");
	addFriend("Sad Lonely Times");
	setDesire(1);
}

/******************************************************
*
* @param
* @return
******************************************************/
void concert::setConcertName(string s)
{
	concertName = s;
}

/******************************************************
*
* @param
* @return
******************************************************/
void concert::setFriend(vector<string> f)
{
	friends = f;
}

/******************************************************
*
* @param
* @return
******************************************************/
void concert::setDesire(int d)
{
	desire = d;
}

/******************************************************
*
* @param
* @return
******************************************************/
void concert::setDate(tm n)
{
	date = n;
}

/******************************************************
*
* @param
* @return
******************************************************/
string concert::getConcertName()
{
	return concertName;
}

/******************************************************
*
* @param
* @return
******************************************************/
vector<string> concert::getfriend()
{
	return friends;
}

/******************************************************
*
* @param
* @return
******************************************************/
int concert::getDesire()
{
	return desire;
}

/******************************************************
*
* @param
* @return
******************************************************/
tm concert::getDate()
{
	return date;
}

/******************************************************
* 
* @param
* @return
******************************************************/
bool concert::operator<(const concert& other) const
{
	//If the year the other concert takes place is
	//before this concert's, then return false.
	if (other.date.tm_year < date.tm_year)
	{
		return false;
	}

	//If the year the other concert takes place is
	//after this concert's, then return true.
	if (other.date.tm_year > date.tm_year)
	{
		return true;
	}

	//If the year is the same continue on.

	//If the month the other concert takes place is
	//before this concert's, then return false.
	if (other.date.tm_mon < date.tm_mon)
	{
		return false;
	}

	//If the month the other concert takes place is
	//after this concert's, then return true.
	if (other.date.tm_mon > date.tm_mon)
	{
		return true;
	}

	//If the month is the same continue on.

	//If the day the other concert takes place is
	//after this concert's, then return false.
	if (other.date.tm_mday < date.tm_mday)
	{
		return false;
	}

	//If the day the other concert takes place is
	//after this concert's, then return true.
	if (other.date.tm_mday > date.tm_mday)
	{
		return true;
	}

	//If the day is the same continue on.

	//If the desire rating for the other concert 
	//is lower than this concert's, then return true.
	if (other.desire < desire)
	{
		return true;
	}

	//Otherwise, return false. Desire of the other
	//concert is equal to or greater than this concert.
	return false;
}

/******************************************************
*
* @param
* @return
******************************************************/
void concert::addFriend(string a) {
	friends.push_back(a);
}
