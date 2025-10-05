//
// Created by Tegshbayar Batbayar on 05.10.25.
//

#include "files.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {

    int fd = open("./asdfasdf", O_RDONLY);
    if (fd == -1) {
        perror(("open"));
        return -1;
    }

    return 0;


}