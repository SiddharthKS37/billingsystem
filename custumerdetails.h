#ifndef CUSTOMER_DETAILS_H
#define CUSTOMER_DETAILS_H

typedef struct {
    char name[50];
    char address[100];
} Customer;

void get_customer_details(Customer *customer);

#endif
