#include "bill_generation.h"

void generate_bill(Bill *bill, Item *items, int num_items, Customer *customer) {
    for (int i = 0; i < num_items; i++) {
        bill->items[i] = items[i];
    }
    bill->num_items = num_items;
    bill->customer = *customer;
}
