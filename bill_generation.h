#ifndef BILL_GENERATION_H
#define BILL_GENERATION_H

#include "item_details.h"
#include "customer_details.h"

typedef struct {
    Item items[MAX_ITEMS];
    int num_items;
    Customer customer;
} Bill;

void generate_bill(Bill *bill, Item *items, int num_items, Customer *customer);

#endif
