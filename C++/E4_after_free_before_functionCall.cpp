#include<iostream>

void print(int* values, size_t size){
    for (size_t i=0 ; i < size; i++)
        std::cout<< values[i]  ;
}

int main(){
    int* values = new int[10];
    delete[] values;

    print(values,5);
}
