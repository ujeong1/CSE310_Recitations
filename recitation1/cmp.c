#include <stdio.h>
#include <string.h>

int main(){
        FILE* fp1 = fopen("Linux_generated.txt", "r");
        FILE* fp2 = fopen("Windows_generated.txt", "r");
        char string1[255], string2[255];

        fgets(string1, sizeof(string1), fp1);
        printf("%s: Linux length(%d)\n", string1, strlen(string1));

        printf("\n");

        fgets(string2, sizeof(string2), fp2);
        printf("%s: Windows length(%d)\n", string2, strlen(string2));

        return 0;
}
