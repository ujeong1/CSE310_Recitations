#include "csv_format.h"
#include <stdio.h>

int main(){
	FILE *fr = fopen("fatalities-1950.csv", "r");
	char string[CELL_LEN];
	if (fr != NULL){
		while( fgets(string, sizeof(string), fr) != NULL){
			csv_format(string);
		}
		fclose(fr);
	}
	
	return 0;
}
