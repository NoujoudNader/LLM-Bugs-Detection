#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>


int packet_get_int() {
    static bool seeded = false;
    if (!seeded) {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        seeded = true;
    }
    return std::rand();
}

std::string packet_get_string(void* /* unused_argument */) {
    static int call_count = 0;
    call_count++;
    return "Response_" + std::to_string(call_count);
}

int main() {
    int nresp = 0;
    std::vector<std::string> response;

    nresp = packet_get_int();
        std::cout << "nresp: not 1073741824 " << nresp << std::endl;


    if (nresp > 0) {
        response.reserve(nresp);
        for (int i = 0; i < nresp; ++i) {
            response.push_back(packet_get_string(nullptr));
        }
    }

    std::cout << "Number of responses: " << nresp << std::endl;
    for (const std::string& res : response) {
        std::cout << res << std::endl;
    }
    return 0;
}
