#include <stdio.h>
#include "billing.h"

void run_billing_system() {
    printf("Welcome to the Billing System!\n");

    // Call functions from other sections
    Item items[MAX_ITEMS];
    int num_items = get_item_details(items);

    Customer customer;
    get_customer_details(&customer);

    Bill bill;
    generate_bill(&bill, items, num_items, &customer);

    float total_bill = calculate_total_bill(&bill);

    printf("Total Bill: $%.2f\n", total_bill);
}
