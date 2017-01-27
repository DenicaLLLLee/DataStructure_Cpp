struct keyValuePairT {
	string key;
	T value;
};
static const int INITIAL_CAPACITY = 10;
keyValuePairT *array;
int count;
int capacity;
int findKey(string key);
void expandCapacity();