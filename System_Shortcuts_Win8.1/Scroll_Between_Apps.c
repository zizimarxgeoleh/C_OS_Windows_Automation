#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {

    char command[1000];
    
    strcpy(command, "nircmd");
    
    strcat(command, " sendkeypress ctrl+alt+tab ");
    system(command);

    return 0;		
}

