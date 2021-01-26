#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct example{
        int value;
        char string[10];
};

void main () {
        struct example* myObjs = (struct example*)malloc(sizeof(struct example) * 3);

        myObjs[0].value = 1;
        strcpy(myObjs[1].string, "Hello World");
        printf("[0]:%d\n", myObjs[0].value );
        printf("String sample : %s\n", myObjs[1].string);

	//myObjs[0]->value = 1;
        //strcpy(myObjs[1]->string, "Hello World");
        //printf("[0]:%d\n", myObjs[0]->value );
        //printf("String sample : %s\n", myObjs[1]->string);

	//myObjs->value = 10;
        //strcpy((myObjs+1)->string, "Goodbye World");
        //printf("[0]:%d\n", myObjs->value );
        //printf("String sample : %s\n", (myObjs+1)->string);

	//(*myObjs).value = 100;
        //strcpy((*(myObjs+1)).string, "Rejoice World");
        //printf("[0]:%d\n", myObjs->value );
        //printf("String sample : %s\n", (myObjs+1)->string);
        
        //struct example default_Obj = {0, "UNDEFINED"};
        //*myObjs = default_Obj;
        //(*(myObjs+1)) = default_Obj;
        //printf("[0]:%d\n", myObjs->value);
        //printf("String sample : %s\n",(myObjs+1)->string);
        
        free(myObjs);
}

