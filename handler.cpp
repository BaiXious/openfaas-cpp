#include <cstring>
#include "header.h"

#define INPUT_MAX_SIZE 15

int main() {

    char *input;
    int actLen, maxLen;

	// Allocating memory to data array;
    maxLen = INPUT_MAX_SIZE + 2;
    input = new char[maxLen];

	// Getting data from standard input;
    std::cin.getline(input, maxLen);
    actLen = std::strlen(input);

	// Removing '\n' from the end;
    if (input[actLen - 1] == '\n') {
        input[actLen - 1] = '\0';
        actLen = std::strlen(input);
    }

	// Forwarding received data;
    manager(input);
    delete[] input;
    return 0;
}
