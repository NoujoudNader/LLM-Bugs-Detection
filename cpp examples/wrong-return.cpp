#include <string>
#include<iostream>

int& function()
{
  int x = 0;
  return x;
}

int main(){

std::cout << function()  << std::endl;

}
