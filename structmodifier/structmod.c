//
// Created by Tegshbayar Batbayar on 04.10.25.
//

#include "structmod.h"
#include <stdbool.h>
#include <stdio.h>

#define MAX_EMPLOYEES 1000

struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
}__attribute__((__packed__));


int main() {

    struct employee_t employees[MAX_EMPLOYEES];
    // Optional: Initialize to avoid garbage (like your first code)
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        employees[i].income = 0.0f;
        employees[i].ismanager = false;
    }

    printf("Size of employee: %zu\n", sizeof(struct employee_t));




}