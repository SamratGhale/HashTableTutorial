#pragma once
#include <iostream>
#include <string>
#include "LinkedList.h"
#define BUCKET 100

typedef struct HashMap{
    Node* table[BUCKET]{};
}HashMap;


int hashFunction(int id);

void insert_hash(HashMap *h, int id, string value);
