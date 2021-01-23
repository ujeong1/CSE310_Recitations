#include <stdio.h>

int main(){
	FILE *fr = fopen("fatalities-1950.csv", "r");
	char string[255];
	if (fr != NULL){
		while( fgets(string, sizeof(string), fr) != NULL){
			printf("%s", string);
		}
		fclose(fr);
	}
	
	return 0;
}
