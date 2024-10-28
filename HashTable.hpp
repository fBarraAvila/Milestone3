/**
*
* HashTable.hpp : This is the header file for HashTable.
*
* 09/23/24 - Created by ChatGPT
* 10/17/24 - Modified by jhui
*/

#ifndef _HASH_TABLE
#define _HASH_TABLE
#define _HASH_TABLE_SIZE 101

// added string and vector headers
#include <string>
#include <vector>


using IntVector = std::vector<int>;

// Define a structure for a node in the hash table
struct HashNode {
	
	int key;                                                           // Value stored in the node

	std::string fullName;
	std::string address;
	std::string city;
	std::string state;
	std::string zip;

	HashNode* prev;                                                     // Pointer to the previous node
	HashNode* next;                                                     // Pointer to the next node

	// Constructor to initialize a new node with values
	HashNode(int val, std::string myFullName, std::string myAddress, std::string myCity, std::string myState, std::string myZip) : 
		key(val), fullName(myFullName), address(myAddress), city(myCity), state(myState), zip(myZip), prev(nullptr), next(nullptr) {}
};

// Define a class for the hash table allowing bi-directional traversal
class HashTable {
private:
	// HashNode* table[_HASH_TABLE_SIZE];
	HashNode** table;
	int numberOfItems;

public:
	// Default constructor
	HashTable();

	/**
	*
	* getTable
	*
	* Method to return the hash table.  This is a sample implementation of this method to be copied to your HashTable.cpp.  
	* The method, getTable(), would generally not be in your implementation, but is needed here so that the contents can be 
	* printed out from main() to verify the contents of your hashTable.
	*
	* param: none
	*
	* returns: the hash table array
	*
	HashNode** HashTable::getTable() {
		return (table);
	}
	*/

	// getTable
	// done
	HashNode** getTable();

	// getSize
	// done
	int getSize();

	// isEmpty
	// done
	bool isEmpty();

	// getNumberOfItems
	// done
	int getNumberOfItems();

	// add(searchKey, newItem)
	// done
	bool add(int, HashNode*);

	// remove(int)
	// done
	bool remove(int);

	// clear()
	// done
	void clear();

	// getItem(int)
	// done
	HashNode* getItem(int);

	// contains(int)
	// done
	bool contains(int);
}; // end HashTable



#endif 