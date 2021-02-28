#include "foo.h"
int func(int a) {   return a;  }
 
void myclass::foo(int a)
{
  i = func(a);
  std::cout<<i<<"\n";
}
