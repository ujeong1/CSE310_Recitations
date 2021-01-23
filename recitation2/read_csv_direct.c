#include <stdio.h>
#define MAX_LEN 255
int main(int argc, char* argv[]){
	FILE *fr = fopen(argv[1], "r");
	char string[MAX_LEN];
	if (fr != NULL){
		while( fgets(string, sizeof(string), fr) != NULL){
			printf("%s", string);
		}
		fclose(fr);
	}
	return 0;
}
