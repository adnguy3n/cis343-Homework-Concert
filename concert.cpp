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
	setDate({ 0, 0, 0, 1, 0, 0 });
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
* Constructor that has all but the friend and date
* parameters passed. Intializes concert with the given
* values and default values for friend and date.
*
* @param string s, the name of the concert;
* int d, how much you want to attend said concert on
* a scale of 1 to 10;
*
* @return none.
******************************************************/
concert::concert(string s, int d)
{
	setConcertName(s);
	setDesire(d);
	addFriend("Sad Lonely Times");
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
* Constructor that has parameters passed for concert
* name and date. Initializes concert with the given
* values and uses default values for friends and desire.
*
* @param string s, the name of the concert;
* tm n, the date of the concert.
*
* @return none.
******************************************************/
concert::concert(string s, tm n)
{
	setConcertName(s);
	setDate(n);
	addFriend("Sad Lonely Times");
	setDesire(1);
}

/******************************************************
* Constructor with only the concert name parameter
* passed. Initializes concert with the given value and
* default values for the remaining paremeters.
*
* @param string s, the name of the concert;
*
* @return none.
******************************************************/
concert::concert(string s)
{
	setConcertName(s);
	addFriend("Sad Lonely Times");
	setDesire(1);
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
* Constructor with all but the concert name parameter
* passed. Initializes concert with the given values and
* a default value for concert name.
*
* @param vector f, a list of friends you want to bring;
* int d, how much you want to attend said concert on
* a scale of 1 to 10; tm n, the date of the concert.
*
* @return none.
******************************************************/
concert::concert(vector<string> f, int d, tm n)
{
	setFriend(f);
	setDesire(d);
	setDate(n);
	setConcertName("Staying Home");
}

/******************************************************
* Constructor with all but the concert name and date
* parameters passed. Initializes concert with the given
* values and default values for concert name and date.
*
* @param vector f, a list of friends you want to bring;
* int d, how much you want to attend said concert on
* a scale of 1 to 10
*
* @return none.
******************************************************/
concert::concert(vector<string> f, int d)
{
	setFriend(f);
	setDesire(d);
	setConcertName("Staying Home");
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
* Constructor with all but the concert name and desire
* parameters passed. Initializes concert with the given
* values and default values for concert name and desire.
*
* @param vector f, a list of friends you want to bring;
* tm n, the date of the concert.
*
* @return none.
******************************************************/
concert::concert(vector<string> f, tm n)
{
	setFriend(f);
	setDate(n);
	setConcertName("Staying Home");
	setDesire(1);
}

/******************************************************
* Constructor with only the friend parameter passed.
* Initializes concert with the given value for friends
* and default values for the remaining parameters
*
* @param vector f, a list of friends you want to bring;
*
* @return none.
******************************************************/
concert::concert(vector<string> f)
{
	setFriend(f);
	setConcertName("Staying Home");
	setDesire(1);
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
* Constructor with desire and date parameters passed.
* Initializes concert with the given values and default
* values for concert name and friend.
*
* @param int d, how much you want to attend said concert on
* a scale of 1 to 10; tm n, the date of the concert.
*
* @return none.
******************************************************/
concert::concert(int d, tm n)
{
	setDesire(d);
	setDate(n);
	setConcertName("Staying Home");
	addFriend("Sad Lonely Times");
}

/******************************************************
* Constructor with only the desire parameter passed.
* Initializes concert with the given value for desire and
* default values for the remaining parameters.
*
* @param int d, how much you want to attend said concert on
* a scale of 1 to 10
*
* @return none.
******************************************************/
concert::concert(int d)
{
	setDesire(d);
	setConcertName("Staying Home");
	addFriend("Sad Lonely Times");
	setDate({ 0, 0, 0, 1, 0, 0 });
}

/******************************************************
* Constructor with only the date parameter passed.
* Initializes with the given value for desire and default
* values for the remaining parameters.
*
* @param string s, the name of the concert;
* vector f, a list of friends you want to bring;
* int d, how much you want to attend said concert on
* a scale of 1 to 10; tm n, the date of the concert.
*
* @return none.
******************************************************/
concert::concert(tm n)
{
	setDate(n);
	setConcertName("Staying Home");
	addFriend("Sad Lonely Times");
	setDesire(1);
}

/******************************************************
* Sets the passed string as the concert name.
*
* @param string s, the name of the concert;
*
* @return none.
******************************************************/
void concert::setConcertName(string s)
{
	concertName = s;
}

/******************************************************
* Sets the passed vector as the list of friends.
*
* @param vector f, a list of friends you want to bring;
*
* @return none.
******************************************************/
void concert::setFriend(vector<string> f)
{
	friends = f;
}

/******************************************************
* Sets the passed integer as the desire rating.
* Must be between 1 to 10, including 1 and 10, or
* desire is set to a default value.
*
* @param int d, how much you want to attend said concert on
* a scale of 1 to 10
*
* @return none.
******************************************************/
void concert::setDesire(int d)
{
	//if d is greater than 10 or less than 1
	//d is defaulted to 1.
	if (d > 10 || d < 1)
	{
		cout << "Invalid value for desire.\n" 
			<< "Defaulting value to 1\n.";
		d = 1;
	}

	desire = d;
}

/******************************************************
* Sets the date of the concert to the passed date
* parameter.
*
* @param tm n, the date of the concert.
*
* @return none.
******************************************************/
void concert::setDate(tm n)
{
	date = n;
}

/******************************************************
* Get method for concertName. Returns concertName
* upon being called.
*
* @param none.
* @return string concertName
******************************************************/
string concert::getConcertName()
{
	return concertName;
}

/******************************************************
* Get method for friends. Returns friends upon being
* called.
*
* @param none.
* @return vector<string> friends
******************************************************/
vector<string> concert::getfriend()
{
	return friends;
}

/******************************************************
* Get method for desire. Returns desire upon being
* called.
*
* @param none.
* @return int desire
******************************************************/
int concert::getDesire()
{
	return desire;
}

/******************************************************
* Get method for date. Returns date upon being called.
*
* @param none.
* @return tm date
******************************************************/
tm concert::getDate()
{
	return date;
}

/******************************************************
* Method used for sorting concerts.
*
* @param concert other, the other concert this concert
* is being compared to.
*
* @return True if the current concert is before the other
* concert. If the dates are the same, return true if the
* desire for this concert is greater than the desire
* for the other concert. Otherwise returns false.
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
* Method for adding a friend to your list of friends to
* take to the concert.
*
* @param string a, the name of the friend you want to take.
*
* @return none.
******************************************************/
void concert::addFriend(string a) {
	friends.push_back(a);
}