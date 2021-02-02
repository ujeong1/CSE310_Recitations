#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[]){
	FILE*stream = fopen(argv[1], "r");
	char string[255];
	char header[255];
	char* token;
	if (stream != NULL){
		fgets(header, sizeof(header), stream);
		while( fgets(string, sizeof(string), stream) != NULL){
			token = strtok(string, ",");
			while(token != NULL){
				printf("%s ", token);
				token = strtok(NULL, ",");
			}
		}
		fclose(stream);
	}
	
	return 0;
}
