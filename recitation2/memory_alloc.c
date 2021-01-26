#include <stdio.h>
#include <string.h>
#define MAX_LEN 255
void main () {
   char *memory1;
   char *memory2;

   memory1 = (char*)malloc(sizeof(char)*MAX_LEN);
   memory2 = (char*)calloc(MAX_LEN, sizeof(char));

   strcpy(memory1, "I am memory 1\n"); 
   strcpy(memory2, "I am memory 2\n");

   //memory1 = "I am memory 1\n";
   //memory2 = "I am memory 2\n";

   printf("size : %d, contents : %s", sizeof(memory1), memory1);
   printf("size : %d, contents : %s", sizeof(memory2), memory2);

   free(memory1);
   free(memory2);
}
