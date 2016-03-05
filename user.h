#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <cstdlib>

using std::string;
using std::vector;

class User{
	string username;
	string password;
	vector<int> games;

  public: 
	User(string , string);
	bool addGame(int id);
	bool deleteGame(int id);
	void changePassword(string,string);
	string getUsername();
	bool isValidPassword(string username , string password);
	string toString() const;
	vector<int> getInventario();
};
