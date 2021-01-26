#include <stdio.h>

struct node{
	int value;
	struct node* next;
};

int main(){
	struct node* MyObj = (struct node*)malloc(sizeof(struct node*));
	struct node* PtrObj = (struct node*)malloc(sizeof(struct node*));
	
	PtrObj->value = 10;
	printf("Ptr next value : %d\n", PtrObj->value);

	MyObj->next = PtrObj;
	printf("Obj next value : %d\n", MyObj->next->value);
	

	return 0;
}
