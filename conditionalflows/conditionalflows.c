//
// Created by Tegshbayar Batbayar on 02.10.25.
//

#include "conditionalflows.h"
#include <stdio.h>


int main() {

    int temp;
    printf("what temp is it?");
    scanf("%d", &temp);

    if (temp >= 70) {
        printf("its hot\n");
    } else if (temp >= 30 && temp < 70) {
        printf("its mild\n");
    } else {
        printf("its cold\n");
    }

    return 0;
}