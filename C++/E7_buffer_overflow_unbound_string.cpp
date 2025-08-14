#include <cstdio>

int main(int argc, char *argv[]) {
    int i = 0;
    char buff[128];
    char *arg1 = argv[1];

    while (arg1[i] != '\0') {
        buff[i] = arg1[i];
        i++;
    }
   
    buff[i] = '\0';
   
    printf("buff = %s\n", buff);
    return 0;
}
