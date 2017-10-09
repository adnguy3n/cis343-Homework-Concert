#ifndef CONCERT_H
#define CONCERT_H

#include "stdafx.h"
#include "concert.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

class concert
{
	private:
		// Who will be performing?
		string concertName;

		// A list of the people you want
		// to take with you.  May be empty
		// or arbitrarily full.
		vector<string> friends;

		// A value from 1-10 concerning how
		// badly you want to see this show.
		int desire;

		// The date of the show
		tm date;

	public:

		//set functions
		void setConcertName(string); //set Concert Name
		void setFriend(vector<string>); //Add a friend
		void setDesire(int); //Set Desire from 1 to 10
		void setDate(tm); //Set Date of Concert

		//get functions
		string getConcertName(); //get Concert Name
		vector<string> getfriend(); //Get list of friends
		int getDesire(); //Get Desire
		tm getDate(); //Get Date of Concert

		//Constructor with default values
		concert();

		//Various constructors with a variety of parameters
		concert(string s, vector<string> f, int d, tm n);
		concert(string s, vector<string> f, int d);
		concert(string s, int d, tm n);
		concert(string s, vector<string> f, tm n);
		concert(string s, vector<string> f);
		concert(string s, int d);
		concert(string s, tm n);
		concert(string s);

		concert(vector<string> f, int d, tm n);
		concert(vector<string> f, int d);
		concert(vector<string> f, tm n);
		concert(vector<string> f);

		concert(int d, tm n);
		concert(int d);
		
		concert(tm n);

		//Overload < Operator
		bool concert::operator<(const concert& other) const;

		//Other Methods
		void addFriend(string); //Add a friend
		
};

#endif 