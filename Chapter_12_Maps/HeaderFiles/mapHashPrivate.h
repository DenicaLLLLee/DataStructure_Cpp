///*
//* File: mappriv.h
//* ---------------
//* This file contains the private section of the Map template
//* class. Including this information in a separate file means
//* that clients don't need to look at these details.
//*/
///* Constants */
//static const int INITIAL_SIZE = 101;
///* Type for a linked list cell */
//template <typename ValueType>
//struct cellT {
//	string key;
//	ValueType value;
//	cellT *link;
//};
///* Instance variables */
//cellT **buckets; /* A dynamic array of the buckets */
//int nBuckets; /* Allocated size of the buckets array */
//int nEntries; /* The number of entries in the map */
//			  /* Private method prototypes */
//int hash(string s);
//cellT *findCell(cellT *chain, string key);
//void deleteChain(cellT *chain);