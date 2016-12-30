/*
	Vector Utility
	This file contains all the
	functions related with vector data type
	Oyashi
	12/29/2016
*/
#pragma once
#ifndef __vectorutil_h__
#define __vectorutil_h__
/*
 Function: RemoveZeroElements
 Usage: RemoveZeroElements(vec);
 ------------------------------
 This function removes ZERO elements
 from the given vector.
*/
void RemoveZeroElements(std::vector<int> &vec);
/*
 Function: RemoveSpecificElement
 Usage: RemoveSpecificElement(vec);
 ------------------------------
 This function removes any user given
 elements from the given vector.
*/
void RemoveSpecificElement(std::vector<int> &vec, int element);
/*
 Function: DisplayVector
 Usage: DisplayVector(vec);
 ------------------------------
 This function displays the elements
 from the given vector.
*/
void DisplayVector(std::vector<int> &vec);
#endif // !__vectorutil_h__



