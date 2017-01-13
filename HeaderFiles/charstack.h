/*
* File: charstack.h
* -----------------
* This interface defines the CharStack class, which implements
* the stack abstraction for characters.
*/
#ifndef _charstack_h
#define _charstack_h
/*
* Class: CharStack
* ----------------
* This interface defines a class that models a stack of characters.
* Characters are added and removed only from the top of the stack.
* The fundamental stack operations are push (add to top) and pop
* (remove from top).
*/
class CharStack {
public:
	/*
	* Constructor: CharStack
	* Usage: CharStack cstk;
	* ----------------------
	* Initializes a new empty stack that can contain characters.
	*/
	CharStack();
	/*
	* Destructor: ~CharStack
	* Usage: (usually implicit)
	* -------------------------
	* Deallocates storage associated with this cstk. This method is
	* called whenever a CharStack instance variable is deallocated.
	*/
	~CharStack();
	/*
	* Method: size
	* Usage: nElems = cstk.size();
	* ----------------------------
	* Returns the number of characters in this stack.
	*/
	int size();
	/*
	* Method: isEmpty
	* Usage: if (cstk.isEmpty()) . . .
	* --------------------------------
	* Returns true if this stack contains no characters, and false
	* otherwise.
	*/
	bool isEmpty();
	/*
	* Method: clear
	* Usage: cstk.clear();
	* --------------------
	* This method removes all characters from this stack.
	*/
	void clear();
	/*
	* Method: push
	* Usage: cstk.push(ch);
	* ---------------------
	* Pushes the character ch onto this stack.
	*/
	void push(char ch);
	/*
	* Method: pop
	* Usage: topChar = cstk.pop();
	* ----------------------------
	* Removes the top character from this stack and returns it.
	*/
	char pop();
	/*
	* Method: peek
	* Usage: topChar = cstk.peek();
	* -----------------------------
	* Returns the value of top character from this stack without
	* removing it. Raises an error if called on an empty stack.
	*/
	char peek();
private:
	static const int INITIAL_CAPACITY = 100;
	char *elements; /* Dynamic array of characters */
	int capacity; /* Allocated size of that array */
	int count; /* Current count of chars pushed */
	void expandCapacity();
};
#endif
