
#include "strings.h"
#include <stdio.h>

#define MAX_IDS 32



int main()
{
    int ids[MAX_IDS] = {0, 1, 2};

    char myStr[] = {'h', 'e', 'l', 'l', 'o', 0};
    char *myotherstr = "hello";
    printf("%s\n", myStr);

    return 0;

}
