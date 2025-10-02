#include "library.h"
#include <stdio.h>

/**
 * Preprocessor
 */
#define MAX_PERSONS 1024
#define DEBUG
#define PI 3.14
#define MAX_IDS 32


/**
 * Sector to test preprocessors
 * @return test printf objects
 */
int main()
{
    #ifdef DEBUG
    printf("WE ARE IN DEBUG MODE: %s%d", __FILE__, __LINE__);
    #endif

    int ids[MAX_IDS] = {0, 1, 2};
    //int ids[] = {1, 2, 3}; // room for 3
    printf("%d\n", ids[0]);
    ids[3] = 0x41;
    printf("%d\n", ids[3]);
    //type name = initial value;
    int personID = 0;
    int person2ID = personID+1;


}



