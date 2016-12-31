/*
	Implementation file of maputility.h
	Oyashi
	12/30/2016
*/

#include <iostream>
#include <map>
#include <string>
#include "HeaderFiles\maputility.h"

void add(std::map<std::string, double> & Map, std::string var, double number) {
	std::pair<std::string, double> keyValue(var, number);
	Map.insert(keyValue);
}

void display(std::map<std::string, double> & Map, std::string key) {
	std::cout << Map.find(key)->second << std::endl;
}
void list(std::map<std::string, double> & Map) {
	std::map<std::string, double>::iterator itr;
	for (itr = Map.begin(); itr != Map.end(); ++itr) {
		std::cout << itr->first << " = " << itr->second << std::endl;
	}
}