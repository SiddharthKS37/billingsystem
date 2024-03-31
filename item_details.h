#ifndef ITEM_DETAILS_H
#define ITEM_DETAILS_H

#define MAX_ITEMS 100

typedef struct {
    char name[50];
    float price;
} Item;

int get_item_details(Item *items);

#endif
