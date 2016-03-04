#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using std::stringstream;
using std::string;
using std::endl;

class Game{
	int id;
	string name;
	int year;
	string developers;
	string genre;
	public:
		Game(int,string ,int, string ,string);
		int getId();
		string toString();		
	
};


