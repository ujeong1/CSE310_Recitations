#include <stdio.h>

struct node{
	int value;
	char string[30];
};

int main(){
	struct node** MyObj1 = (struct node**)malloc(sizeof(struct node*)*2);
	
	int i;
	for(i=0; i<2; i++){
		MyObj1[i] = (struct node*)malloc(sizeof(struct node));
	}	
	//PtrObj->value = -1000;
	//printf("%d", PtrObj->value);

	MyObj1[0]->value = 1;
	strcpy(MyObj1[1]->string, "memory1");
	printf("%d %s\n", MyObj1[0]->value, MyObj1[1]->string);
	
        for(i=0; i<2; i++){
                free(MyObj1[i]);
        }
	free(MyObj1);

	//////////Array style : fixed + dynamic alloc/////////////

	struct node* MyObj2[2];//give 2 as fixed value of double pointer length

        for(i=0; i<2; i++){
                MyObj2[i] = (struct node*)malloc(sizeof(struct node));
        }

	MyObj2[0]->value = 2;
	strcpy(MyObj2[1]->string, "memory2");
	printf("%d %s\n", MyObj2[0]->value, MyObj2[1]->string);

        for(i=0; i<2; i++){
                free(MyObj2[i]);
        }

	//Do not free(MyObj2) because it is not dynamically assigned

	return 0;
}
