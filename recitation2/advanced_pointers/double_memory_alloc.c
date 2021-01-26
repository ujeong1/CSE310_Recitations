#include<stdio.h>

int main(){
	char **StrPtr = (char**)malloc(sizeof(char*)*2);
	int i;
	for(i=0; i<2; i++){
		StrPtr[i] = (char*)malloc(sizeof(char));
	}

	strcpy(StrPtr[0],"memory1");
	strcpy(StrPtr[1],"memory2");

	printf("%s\n", StrPtr[0]);
	printf("%s\n", StrPtr[1]);

	for(i=0; i<2; i++){
		free(StrPtr[i]);
	}

	free(StrPtr);

	return 0;
}
	

	
