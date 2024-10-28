//
//  HashTable.cpp
//  week_9
//
//  Created by Franco Barra on 10/24/24.
//

#include <stdio.h>
#include <vector>
#include "HashTable.hpp"

HashTable::HashTable(){
    table = new HashNode*[_HASH_TABLE_SIZE];
    numberOfItems = 0;
}

HashNode** HashTable::getTable() {
    return (table);
}

int HashTable::getSize(){
    return _HASH_TABLE_SIZE;
}

bool HashTable::isEmpty(){
    
    return numberOfItems == 0;
}
// getNumberOfItems
int HashTable::getNumberOfItems(){
    return numberOfItems;
}

// add(searchKey, newItem)
bool HashTable::add(int searchKey, HashNode* newItem){
    int tableIndex = searchKey % _HASH_TABLE_SIZE;
    HashNode* currentNode = table[tableIndex];
    
    if(table[tableIndex] == nullptr){
        table[tableIndex] = newItem;
    }
    else{
        //adds at the head
        currentNode->prev = newItem;
        newItem->next = currentNode;
        table[tableIndex] = newItem;
        // adds at the tail
//        while(currentNode->next != nullptr){
//            currentNode = currentNode->next;
//        }
//        currentNode->next = newItem;
//        newItem->prev = currentNode;
        
    }
    numberOfItems++;
    return true;
}

// remove(int)
bool HashTable::remove(int searchKey){
    int tableIndex = searchKey % _HASH_TABLE_SIZE;
    HashNode* currentNode = table[tableIndex];
    
    while(currentNode != nullptr && currentNode->key != searchKey){
        currentNode = currentNode->next;
    }
    
    // check if searchKey was found in bucket
    if(currentNode == nullptr){
        return false;
    }
    // check if searchKey is found at head, updates the list by removing the head
    // and table[i] points to new head
    if(currentNode->prev == nullptr){
        table[tableIndex] = currentNode->next;
        if(table[tableIndex] != nullptr){
            table[tableIndex]-> prev = nullptr;
        }
    }
    // check if searchKey is found at tail
    else if(currentNode->next == nullptr){
        currentNode->prev->next = nullptr;
        //delete currentNode;
    }
    // check if searchKey is found in the body of list
    else{
        currentNode->prev->next = currentNode->next;
        currentNode->next->prev = currentNode->next;
        //delete currentNode;
    }
    delete currentNode;
    numberOfItems--;
    return true;
    
    
}

// clear()
void HashTable::clear(){
    HashNode* current = nullptr;
    HashNode* nodeToDelete = nullptr;
    for(int i = 0; i < _HASH_TABLE_SIZE; i++){
        if(table[i] != nullptr){
            current = table[i];
            while(current != nullptr){
                nodeToDelete = current;
                current = current->next;
                delete nodeToDelete;
            }
        }
        table[i] = nullptr;
    }
    numberOfItems = 0;
}

// getItem(int)
// returns the hashnode at the given index
HashNode* HashTable::getItem(int searchKey){
    // get the hash bucket and the current node to traverse the bucket
    int tableIndex = searchKey % _HASH_TABLE_SIZE;
    HashNode* currentNode = table[tableIndex];

    // traverse bucket
    while(currentNode != nullptr){
        // if current searchKey exists in our hashtable
        if(searchKey == currentNode -> key){
            return currentNode;
        }
        currentNode = currentNode -> next;
    }

    // if we cant find the key
    return nullptr;
}


// contains(int)
bool HashTable::contains(int searchKey){
    // get the hash bucket and the current node to traverse the bucket
    int tableIndex = searchKey % _HASH_TABLE_SIZE;
    HashNode* currentNode = table[tableIndex];
    
    // traverse bucket
    while(currentNode != nullptr){
        // if current searchKey exists in our hashtable
        if(searchKey == currentNode -> key){
            return true;
        }
        currentNode = currentNode -> next;
    }
    
    // if we cant find the key
    return false;
}
