#include<iostream>
void print(int* values, size_t size){

    for (size_t i=0 ; i < size; i++)
        std::cout<< values[i]  ;
    delete[] values;
}
int main(){

    int* values = new int[10];
    print(values,5);
    delete[] values;

}
