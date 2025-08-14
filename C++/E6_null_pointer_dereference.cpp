#include <cstddef>

int main(){
    size_t size = 10;
    int* data = nullptr;


    for (size_t i=0 ; i < size ; i++)
        data[i] = 2 * data[i];
}
