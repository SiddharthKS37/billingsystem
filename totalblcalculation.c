#include "total_bill_calculation.h"

float calculate_total_bill(Bill *bill) {
    float total = 0.0;
    for (int i = 0; i < bill->num_items; i++) {
        total += bill->items[i].price;
    }
    return total;
}
