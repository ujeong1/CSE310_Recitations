#include <stdio.h>

int main(){
	FILE *fw = fopen("C_test.txt", "w");
	if (fw != NULL){
		fputs("Hello World!!!\n", fw);
		fputs("This is C File Contents.\n", fw);
		fclose(fw);
	}

	FILE *fr = fopen("C_test.txt", "r");
	char string[255];
	if (fr != NULL){
		//fscanf(fr, "%s", string);//fscanf finish reading when it encounters spacebar
		while( fgets(string, sizeof(string), fr) != NULL){
			printf("%s", string);
		}
		fclose(fr);
	}
	
	return 0;
}
