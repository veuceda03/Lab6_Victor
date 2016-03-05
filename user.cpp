#include "user.h"
#include <iostream>


User::User(string username, string password){
	this-> username = username;
	this-> password = password;
}

bool User::addGame(int id){
	this-> games.push_back(id);
}

bool User::deleteGame(int id){
	for(int i=0;i<games.size();i++){
		if(games.at(i)==id){
			this->games.erase(games.begin()+i);
			return true;
		}
	}
	return false;
}

void User::changePassword(string pass,string passw){
	if(pass==password){
		this->password=passw;
	}
}

string User::getUsername(){
	return username;
}

bool User::isValidPassword(string user , string pass){
	if(username==user && password==pass){
		return true;
	}else{
		return false;
	}
}
	
string User::toString() const{
	return username;
}

vector<int> User::getInventario(){
	return games;
}
