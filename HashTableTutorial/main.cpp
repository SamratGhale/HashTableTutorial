#include <iostream>
#include <string>
#include "Hashmap.h"

int main()
{
    HashMap * h = new HashMap();
    insert_hash(h, 150, "samrat");
    insert_hash(h, 50, "ishan");
    insert_hash(h, 250, "sulav guad");
    insert_hash(h, 120, "samrat ghale");
    printf("");
    return 0;
}
