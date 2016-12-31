#pragma once
/*
	Map Utility Header file
	Oyashi
	12/30/2016
*/

#ifndef __maputility_h__
#define __maputility_h__
void add(std::map<std::string, double> & Map, std::string var, double number);
void display(std::map<std::string, double> & Map, std::string key);
void list(std::map<std::string, double> & Map);
#endif // !__maputility_h__

