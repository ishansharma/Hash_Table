//
// Created by Ishan Sharma on 6/23/18.
//

#ifndef HASH_TABLE_HASH_TABLE_H
#define HASH_TABLE_HASH_TABLE_H

#endif //HASH_TABLE_HASH_TABLE_H

// one item
typedef struct {
    char* key;
    char* value;
} ht_item;

// primary structure
typedef struct {
    int size;
    int count;
    ht_item** items;
} ht_hash_table;

