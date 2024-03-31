#include <stdio.h>
#include "customer_details.h"

void get_customer_details(Customer *customer) {
    printf("Enter customer name: ");
    scanf("%s", customer->name);
    printf("Enter customer address: ");
    scanf("%s", customer->address);
}
