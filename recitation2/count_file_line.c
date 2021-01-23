#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 255
void main (int argc, char* argv[]){
	char command[MAX_LEN];
	char output[MAX_LEN];
	strcpy(command, "wc -l <" );
	strcat(command, argv[1]);
	FILE* fp=popen(command, "r");
	if(fp == 0){
		printf("Failed to run command\n");
		exit(1);
	}
	fgets(output, sizeof(output), fp);
	printf("%s", output);
}

