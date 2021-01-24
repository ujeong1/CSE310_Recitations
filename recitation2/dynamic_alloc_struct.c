#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct example{
        int value;
        char string[10];
};

void main () {
        struct example* myObjs = (struct example*)malloc(sizeof(struct example) * 3);
        myObjs[0].value = 0;
        strcpy(myObjs[1].string, "Hello World");

        printf("[0]:%d\n", myObjs[0].value );
        printf("String sample : %s\n", myObjs[1].string);
        free(myObjs);
}

