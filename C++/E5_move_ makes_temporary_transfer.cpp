#include <vector>
#include <algorithm>

template<typename T>
T  max(std::vector<T> numbers){
    return *std::max_element(numbers.begin(), numbers.end());
}

int main(){
    std::vector<double> numbers(100);
    double results = max(std::move(numbers));
    size_t n = numbers.size();
}