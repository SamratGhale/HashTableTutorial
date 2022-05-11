#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Hashmap.h"
#define BUCKET 100


void insert_hash(HashMap *h, int id, string value){
    int hash = hashFunction(id);

    Node * n = h->table[hash];

    if(n == NULL){
        h->table[hash] = init_list(id, value);
    }

    else{
        Node * curr = n;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = init_list(id, value);
    }
}



int hashFunction(int id){
    return id%BUCKET;
}
