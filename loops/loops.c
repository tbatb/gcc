#include <stdio.h>
#define MAX_IDS 32

int main() {

    int id = 1;
    int ids[MAX_IDS] = {0};

    // for loop

    for (int i = 0; i < MAX_IDS; i++) {
        ids[i] = i*i;
        printf("%d: %d\n", i, ids[i]);

    }

    int i = 0;
    while (i < MAX_IDS) {
        ids[i] = i*i;
        printf("%d: %d\n", i, ids[i]);

        i++;
    }

    // only 1 execution in do then check while
    i = 0;
    do {
        ids[i] = i*i;
        printf("%d: %d\n", i, ids[i]);

        i++;
    } while (i < MAX_IDS);

    // while loops
    // do while

    return 0;
}