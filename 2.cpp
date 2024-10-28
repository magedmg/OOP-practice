#include <iostream>
#include <string>

char* getArray() {
    char* newArray = new char[3];
    newArray[0] = 'b';
    newArray[1] = 'e';
    newArray[2] = 'n';
    return newArray;
}

int main() {
    char* newArray = getArray();
    *(newArray + 2) = 'e';
    std::cout << std::string(newArray, 3) << std::endl;
    return 0;
}