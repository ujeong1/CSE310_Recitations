# include <stdio.h>
int main(int argc, char *argv[]){
	printf("Argumetns count: %d\n", argc);
	for(int i=0; i<argc; i++){
		printf("Argument %d: %s\n", i, argv[i]);
	}
	return 0;
}
