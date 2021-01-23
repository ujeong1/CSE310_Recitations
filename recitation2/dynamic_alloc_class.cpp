#include <iostream>
#include <cstring>
class example{
	public:
	int value;
	char string[10];
};

int main () {
        example* myObjs = new example [sizeof(class example) * 2];
        myObjs[0].value = 0;
        strcpy(myObjs[1].string, "Hello World");

        std::cout<<"[0]:"<<myObjs[0].value<<std::endl;
        std::cout<<"String sample :"<< myObjs[1].string<<std::endl;

        delete[] myObjs;
        return 0;
}

