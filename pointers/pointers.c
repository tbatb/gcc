//
// Created by Tegshbayar Batbayar on 04.10.25.
//

#include "pointers.h"
#include <stdio.h>
#include <stdbool.h>


struct employee_t {
    int id;
    int income;
    bool staff;
};

void initialize_employee(struct employee_t *e) {
    e -> id = 0;
    e -> income = 0;
    e -> staff = false;

    return;
}

int main() {
    int x = 3;
    // pointer = addressof X
    int *pX = &x;

    printf("%d\n", pX);
    printf("%p\n", pX);

    struct employee_t Ralph;
    initialize_employee(&Ralph);

    printf("%d\n", Ralph.income);
}
