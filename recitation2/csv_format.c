#include<string.h>
#include<stdlib.h>
#define CELLS_LEN 15 // size of double pointer
#define MAX_LEN 255 // size of single pointer
char** csv_format(char* string){
	char *token = strtok(string, ",");
	char **cells = (char**) malloc(sizeof(char*)*CELLS_LEN);
	int index=0;
	
	while(token != NULL){
		cells[index] = (char*) malloc(sizeof(char)*MAX_LEN);
		cells[index] = token;

		printf("%s ", cells[index]);
		token = strtok(NULL, ",");
		index++;
	}

	return cells;
}
