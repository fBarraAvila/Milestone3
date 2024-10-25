//
//  HashTable.cpp
//  week_9
//
//  Created by Franco Barra on 10/24/24.
//

#include <stdio.h>
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
    
    
    
}

//// clear()
//void clear();
