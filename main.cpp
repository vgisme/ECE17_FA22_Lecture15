#include <iostream>

template <typename T>
void printArray(T* aBuffer, size_t aLength) {
    for (int i =0; i < aLength; i++) {
        std::cout << aBuffer[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
    int theArray[] = {1, 2, 3, 4, 5};

    printArray(theArray, 5);

    printArray("Hello", 5);



    return 0;
}
