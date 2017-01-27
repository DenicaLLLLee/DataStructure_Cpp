#pragma once
#ifndef __map_h__
#define __map_h__
#include "genlib.h"
template <class T>
class Map {
private:
	#include "mapArrayPrivate.h"

public:
	Map();
	~Map();
	int size();
	bool isEmpty();
	void clear();
	void put(string key, T value);
	T get(string key);
	bool containsKey(string key);
	void remove(string key);
};

template <class T>
Map<T>::Map() {
	count = 0;
	capacity = INITIAL_CAPACITY;
	array = new keyValuePairT[capacity];
}

template<class T>
inline Map<T>::~Map()
{
	delete[] array;
}

template<class T>
inline int Map<T>::size()
{
	return count;
}

template<class T>
inline bool Map<T>::isEmpty()
{
	return count == 0;
}

template<class T>
inline void Map<T>::clear()
{
	count = 0;
	capacity = INITIAL_CAPACITY;
	delete[] array;
	array = new keyValuePairT[capacity];
}

template<class T>
inline void Map<T>::put(string key, T value)
{
	int index = findKey(key);
	if (index == -1) {
		if (count == capacity) expandCapacity();
		index = count++;
		array[index].key = key;
	}
	array[index].value = value;
}

template<class T>
inline T Map<T>::get(string key)
{
	int index = findKey(key);
	if (index == -1)
		Error("Invalid key");
	return array[index].value;
}

template<class T>
inline bool Map<T>::containsKey(string key)
{
	return (findKey(key) != -1);
}

template<class T>
inline void Map<T>::remove(string key)
{
	int index = findKey(key);
	if (index != -1) {
		array[index] = array[--count];
	}
}

template<class T>
inline int Map<T>::findKey(string key)
{
	for (int i = 0; i < count; i++) {
		if (array[i].key == key) return i;
	}
	return -1;
}

template<class T>
inline void Map<T>::expandCapacity()
{
	keyValuePairT *oldArray = array;
	int count = size();
	capacity *= 2;
	array = new keyValuePairT[capacity];
	for (int i = 0; i < count; i++) {
		array[i] = oldArray[i];
	}
	delete[] oldArray;
}
#endif // !__map_h__

