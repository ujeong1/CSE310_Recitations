#include <stdio.h>
#include <string.h>
#define MAX_LEN 255
void main () {
   char **Point2D = malloc(sizeof(char*)*2); // Point2D[i] stores poitner => Size = 8
   //char *Point2D[2];// Point2D[i] stores string => Size = sizeof(Point2D[i])

   /*Question : Do I need to free(Point2D) in the 2nd case? == char *Point2D[2];*/

   int i;
   for(i=0; i< 2; i++){
       Point2D[i] = malloc(sizeof(char)*MAX_LEN);
   }

   //strcpy(Point2D[0], "I am memory 1\n");
   //strcpy(Point2D[1], "I am memory 2\n");
   
   //Point2D[0] = "I am memory 1\n";
   //Point2D[1] = "I am memory 2\n";
   
   //*Point2D[0] = "I am memory 1\n";
   //*Point2D[1] = "I am memory 2\n";

   //Point2D[0][0] = "I am memory 1\n";
   //Point2D[1][0] = "I am memory 2\n";

   //char str1[MAX_LEN] = "I am stack 1\n";
   //char str2[MAX_LEN] = "I am stack 2\n";
   //strcpy(Point2D[0], str1); // copy str1 to memory and return address
   //strcpy(Point2D[1], str2); // copy str2 to memory and return address
   
   //char str1[MAX_LEN] = "I am stack 1\n";
   //char str2[MAX_LEN] = "I am stack 2\n";
   //Point2D[0] = str1;
   //Point2D[1] = str2;
   
   //char str1[MAX_LEN] = "I am stack 1\n";
   //char str2[MAX_LEN] = "I am stack 2\n";
   //Point2D[0] = &str1[0];//Don't free Point2D[0] as str1 is not in memory
   //Point2D[1] = &str2[0];//Don't free Point2D[1] as str1 is not in memory

   printf("size : %d, contents : %s", sizeof(Point2D[0]), Point2D[0]);
   printf("size : %d, contents : %s", sizeof(Point2D[1]), Point2D[1]);
   
   for(i=0; i< 2; i++){
       free(Point2D[i]);
   }
   free(Point2D);
}
