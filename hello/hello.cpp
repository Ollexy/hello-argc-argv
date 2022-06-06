#include <iostream>

int main(int argc, char* argv[]) {

    printf("argc:     %d\n", argc);
    printf("argv[0]:  %s\n", argv[0]);

    if (argc == 1) {
        printf("No arguments were passed.\n");
    }
    else {
        printf("Arguments:\n");

        for (int i = 1; i < argc; ++i) {
            std::cout << "Hello, " << argv[i] << "!" << std::endl;
        }
    }

    return 0;
}
