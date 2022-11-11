#include <map>
#include <string>
#include <iostream>
#include <sstream>

int main() {
    std::map<std::string, int> encoder;
    std::map<int, std::string> decoder;

    std::string input;

    std::cout << "What do you want to encode?" << std::endl;
    std::getline(std::cin, input);

    std::stringstream inputStream(input), outputStream;
    std::string word;

    while(!inputStream.eof()) {
        inputStream >> word;
        if(0 == encoder.count(word))
        {
            encoder[word] = encoder.size() + 1;
            decoder[encoder[word]] = word;
        }
        outputStream << encoder[word] << ' ';
    }
    std::cout << outputStream.str();

}