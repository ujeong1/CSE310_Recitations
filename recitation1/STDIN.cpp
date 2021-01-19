#include <iostream>
#include <string>

int main ()
{
  std::string name;

  std::getline (std::cin,name);
  std::cout << "Cin read the the input stream : " << name << std::endl;

  return 0;
}
