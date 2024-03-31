#include <stdio.h>
#include "item_details.h"

int get_item_details(Item *items) {
    int num_items;
    printf("Enter the number of items: ");
    scanf("%d", &num_items);

    for (int i = 0; i < num_items; i++) {
        printf("Enter item %d name: ", i + 1);
        scanf("%s", items[i].name);
        printf("Enter item %d price: ", i + 1);
        scanf("%f", &items[i].price);
    }

    return num_items;
}
