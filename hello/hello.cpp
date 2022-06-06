#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "argc: " << argc << std::endl;
    std::cout << "argv[0]: " << argv[0] << std::endl;

    if (argc == 1) {
        printf("No arguments were passed.\n");
    }
    else {
        std::cout << "Arguments:\n";

        for (int i = 1; i < argc; ++i) {
            std::cout << "Hello, " << argv[i] << "!" << std::endl;
        }
    }

    return 0;
}
