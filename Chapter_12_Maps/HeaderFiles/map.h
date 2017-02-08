/*
* File: map.h
* -----------
* This interface exports a slightly simplified version of the Map
* template class.
*/
#ifndef _map_h
#define _map_h
#include "genlib.h"
/*
* Class: Map
* ----------
* This interface defines a class template that stores a collection
* of key-value pairs. The keys are always strings, but the values
* can be of any type. This interface defines the value type using
* the template facility in C++, which makes it possible to specify
* the value type in angle brackets, as in Map<int> or Map<string>.
*/
template <typename ValueType>
class Map {
public:
	/*
	* Constructor: Map
	* Usage: Map<int> map;
	* --------------------
	* The constructor initializes a new empty map.
	*/
	Map();
	/*
	* Destructor: ~Map
	* Usage: delete mp;
	* -----------------
	* The destructor frees any heap storage associated with this map.
	*/
	~Map();
	/*
	* Method: size
	* Usage: nEntries = map.size();
	* -----------------------------
	* This method returns the number of entries in this map.
	*/
	int size();
	/*
	* Method: isEmpty
	* Usage: if (map.isEmpty())...
	* ----------------------------
	* This method returns true if this map contains no entries,
	* false otherwise.
	*/
	bool isEmpty();
	/*
	* Method: clear
	* Usage: map.clear();
	* -------------------
	* This method removes all entries from this map.
	*/
	void clear();
	/*
	* Method: put
	* Usage: map.put(key, value);
	* ---------------------------
	* This method associates key with value in this map. Any value
	* previously associated with this key is replaced by the new one.
	*/
	void put(string key, ValueType value);
	/*
	* Method: get
	* Usage: value = map.get(key);
	* ----------------------------
	* If key is found in this map, this method returns the associated
	* value. If key is not found, the get mathod raises an error.
	* Clients can use the containsKey method to verify the presence
	* of a key in the map before attempting to get its value.
	*/
	ValueType get(string key);
	/*
	* Method: containsKey
	* Usage: if (map.containsKey(key))...
	* -----------------------------------
	* Returns true if there is an entry for key in this map,
	* false otherwise.
	*/
	bool containsKey(string key);
	/*
	* Method: remove
	* Usage: map.remove(key);
	* -----------------------
	* This method removes any entry for key from this map.
	* If there is no entry for the key, the map is unchanged.
	*/
	void remove(string key);
private:
#include "mappriv.h"
};
#include "mapimpl.cpp"
#endif