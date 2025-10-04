//
// Created by Tegshbayar Batbayar on 02.10.25.
//

#include <stdbool.h>
#include <stdio.h>
#define MAX_IDS 32
#define MAX_EMPLOYEES 1000
// create a structure - block of memory with different data types combined into one block

struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};


int main() {

    //struct employee_t Fred;
    //float income = 100;
    //Fred.ismanager = true;

    struct employee_t employees[MAX_EMPLOYEES];
    int i = 0;
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        employees[i].income = 0;
        employees[i].ismanager = false;
    }

    printf("%f\n", employees[10].income);




}