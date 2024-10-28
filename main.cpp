////
////  main.cpp
////  week_9
////
////  Created by Franco Barra on 10/23/24.
////
//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include "HashTable.hpp"
//
////void (HashTable* hashtable){
////    
////}
//
//int main(int argc, const char * argv[]) {
//
//    
//    // hashnode POINTERS
//    HashNode* node1 = new HashNode(101, "Alice Johnson", "123 Maple St", "San Francisco", "CA", "94110");
//    HashNode* node2 = new HashNode(202, "Bob Smith", "456 Oak St", "Los Angeles", "CA", "90001");
//    HashNode* node3 = new HashNode(303, "Carol Williams", "789 Pine St", "Sacramento", "CA", "94203");
//    HashNode* node4 = new HashNode(404, "David Brown", "321 Birch St", "San Jose", "CA", "95112");
//    HashNode* node5 = new HashNode(505, "Evelyn Davis", "654 Cedar St", "Fresno", "CA", "93702");
//    HashNode* node6 = new HashNode(606, "Frank Wilson", "987 Elm St", "Long Beach", "CA", "90802");
//    HashNode* node7 = new HashNode(707, "Grace Martinez", "135 Fir St", "Oakland", "CA", "94607");
//    HashNode* node8 = new HashNode(808, "Henry Anderson", "246 Spruce St", "San Diego", "CA", "92101");
//    HashNode* node9 = new HashNode(909, "Irene Thomas", "357 Redwood St", "Bakersfield", "CA", "93301");
//    HashNode* node10 = new HashNode(1010, "Jack Harris", "468 Poplar St", "Santa Barbara", "CA", "93101");
//    
//    // Nodes for index 1
//    HashNode* node11 = new HashNode(102, "Kim Lee", "123 Elm St", "Los Angeles", "CA", "90001");
//    HashNode* node12 = new HashNode(203, "Tom Clark", "456 Maple St", "Sacramento", "CA", "94203");
//    HashNode* node13 = new HashNode(304, "Sara Nguyen", "789 Oak St", "San Jose", "CA", "95112");
//    HashNode* node14 = new HashNode(405, "Paul Walker", "321 Birch St", "Fresno", "CA", "93702");
//    HashNode* node15 = new HashNode(506, "Emma Roberts", "654 Cedar St", "San Francisco", "CA", "94110");
//
//    // Nodes for index 2
//    HashNode* node16 = new HashNode(103, "Lucas Brown", "987 Fir St", "San Diego", "CA", "92101");
//    HashNode* node17 = new HashNode(204, "Sophia Miller", "246 Poplar St", "Oakland", "CA", "94607");
//    HashNode* node18 = new HashNode(305, "Oliver Davis", "357 Pine St", "Bakersfield", "CA", "93301");
//    HashNode* node19 = new HashNode(406, "Amelia Johnson", "468 Redwood St", "Long Beach", "CA", "90802");
//    HashNode* node20 = new HashNode(507, "Ella Wilson", "579 Spruce St", "Santa Barbara", "CA", "93101");
//
//    // Nodes for index 3
//    HashNode* node21 = new HashNode(104, "Daniel Taylor", "123 Cedar St", "San Diego", "CA", "92103");
//    HashNode* node22 = new HashNode(205, "Mia Moore", "456 Pine St", "Fresno", "CA", "93704");
//    HashNode* node23 = new HashNode(306, "Zoe Jackson", "789 Fir St", "San Francisco", "CA", "94112");
//    HashNode* node24 = new HashNode(407, "Sam Harris", "321 Poplar St", "Los Angeles", "CA", "90004");
//    HashNode* node25 = new HashNode(508, "Lily Clark", "654 Maple St", "Sacramento", "CA", "94204");
//
//    // Nodes for index 6
//    HashNode* node26 = new HashNode(106, "Leah Thompson", "123 Redwood St", "Oakland", "CA", "94608");
//    HashNode* node27 = new HashNode(207, "Jake Smith", "456 Birch St", "San Jose", "CA", "95113");
//    HashNode* node28 = new HashNode(308, "Grace Hall", "789 Elm St", "Santa Barbara", "CA", "93102");
//    HashNode* node29 = new HashNode(409, "Sophie Lopez", "321 Cedar St", "Long Beach", "CA", "90803");
//    HashNode* node30 = new HashNode(510, "Isaac Brown", "654 Fir St", "San Francisco", "CA", "94113");
//    
//    // POINTER to hashtable
//    HashTable* hashTable = new HashTable();
//    
//    hashTable->add(101, node1);
//    hashTable->add(202, node2);
//    hashTable->add(303, node3);
//    hashTable->add(404, node4);
//    hashTable->add(505, node5);
//    hashTable->add(606, node6);
//    hashTable->add(707, node7);
//    hashTable->add(808, node8);
//    hashTable->add(909, node9);
//    hashTable->add(1010, node10);
//    
//    // Adding nodes for index 1
//    hashTable->add(102, node11);
//    hashTable->add(203, node12);
//    hashTable->add(304, node13);
//    hashTable->add(405, node14);
//    hashTable->add(506, node15);
//
//    // Adding nodes for index 2
//    hashTable->add(103, node16);
//    hashTable->add(204, node17);
//    hashTable->add(305, node18);
//    hashTable->add(406, node19);
//    hashTable->add(507, node20);
//
//    // Adding nodes for index 3
//    hashTable->add(104, node21);
//    hashTable->add(205, node22);
//    hashTable->add(306, node23);
//    hashTable->add(407, node24);
//    hashTable->add(508, node25);
//
//    // Adding nodes for index 6
//    hashTable->add(106, node26);
//    hashTable->add(207, node27);
//    hashTable->add(308, node28);
//    hashTable->add(409, node29);
//    hashTable->add(510, node30);
//    
//    HashNode** table = hashTable->getTable();
//    HashNode* current = nullptr;
//    
//    for(int i = 0; i < 101; i++){
//        if(table[i] != nullptr){
//            std::cout << "hash table index: " << i << std::endl;
//            current = table[i];
//            while(current != nullptr){
//                std::cout << "Key: " << current->key << ", Name: " << current->fullName << ", Address: " << current->address << ", City: " << current->city << ", State: " << current->state << ", zip: " << current->zip;
//                std::cout << std::endl;
//                current = current->next;
//            }
//            std::cout << std::endl << std::endl;
//        }
//    }
//    
//    
//    std::cout << std::endl << std::endl << "TEST REMOVE METHOD" << std::endl << std::endl;
//    //removes head,tail and middle node from index 0
//    hashTable->remove(1010);
//    hashTable->remove(101);
//    hashTable->remove(606);
//    
//    //removes head,tail and middle node from index 1
//    hashTable->remove(506);
//    hashTable->remove(102);
//    hashTable->remove(304);
//    
//    //removes all nodes in index 2
//    hashTable->remove(103);
//    hashTable->remove(204);
//    hashTable->remove(305);
//    hashTable->remove(406);
//    hashTable->remove(507);
//    
//    
//    for(int i = 0; i < 101; i++){
//        if(table[i] != nullptr){
//            std::cout << "hash table index: " << i << std::endl;
//            current = table[i];
//            while(current != nullptr){
//                std::cout << "Key: " << current->key << ", Name: " << current->fullName << ", Address: " << current->address << ", City: " << current->city << ", State: " << current->state << ", zip: " << current->zip;
//                std::cout << std::endl;
//                current = current->next;
//            }
//            std::cout << std::endl << std::endl;
//        }
//    }
//    
//    // Clears table
//    std::cout << std::endl << std::endl << "TEST CLEAR METHOD" << std::endl << std::endl;
//    hashTable->clear();
//    
//    for(int i = 0; i < 101; i++){
//        if(table[i] != nullptr){
//            std::cout << "hash table index: " << i << std::endl;
//            current = table[i];
//            while(current != nullptr){
//                std::cout << "Key: " << current->key << ", Name: " << current->fullName << ", Address: " << current->address << ", City: " << current->city << ", State: " << current->state << ", zip: " << current->zip;
//                std::cout << std::endl;
//                current = current->next;
//            }
//            std::cout << std::endl << std::endl;
//        }
//    }
//    
//    return 0;
//}
