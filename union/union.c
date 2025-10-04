//
// Created by Tegshbayar Batbayar on 04.10.25.
//

#include "union.h"
#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000


struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};


union myunion_u {
    int x;
    char c;
    short s;
};


int main() {

    struct employee_t employees[MAX_EMPLOYEES];
    union myunion_u u;
    u.x = 0x41424344;

    printf("%hx %hhx\n", u.s, u.c);

    return 0;
}