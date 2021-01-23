#include <iostream>
#include <cstring>
using namespace std;

int main (){
	char* memory1;
	char* memory2;
	memory1= new char;
	memory2= new char[8];
	strcpy(memory1, "I");
	strcpy(memory2, "I am c++ style memory");
	cout<<memory1<<endl;
	cout<<memory2<<endl;
	delete memory1;
	delete[] memory2;
	return 0;
}
