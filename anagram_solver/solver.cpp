#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

int main() {
    std::ifstream file = std::ifstream("words.txt");
    // take input from user
    std::string input;
    std::cout << "Enter anagram to solve: ";
    std::cin >> input;
    std::sort(input.begin(), input.end());
    std::cout << input << std::endl;
    std::string line;
    while (std::getline(file, line)) {
        std::string sortedLine = line;
        std::sort(sortedLine.begin(), sortedLine.end());
        input.erase(std::remove(input.begin(), input.end(), '\n'), input.end());
        if (line.compare(input) == 0){
            std::cout  << line << " ";}
        // }else{
        //     std::cout << "no: " << sortedLine << std::endl;
        //     file.close();
        //     return 1;
        //      std::cout << input << std::endl;
        // }
    }
    file.close();
    return 0;
}