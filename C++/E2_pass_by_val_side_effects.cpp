template<typename T>
void square(T in)
{
    in =  in * in;
}

int main(){

int i = 5;
square(i);

std::cout << "Square: " << i << std::endl;

}
