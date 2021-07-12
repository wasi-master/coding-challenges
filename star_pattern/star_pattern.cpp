#include <iostream>
#include <string>

std::string repeat(unsigned int num, const std::string &input)
{
    std::string str;
    str.reserve(input.size() * num);
    while (num--)
        str += input;
    return str;
}

int main()
{
    int size = 15;
    int i = 0;
    int iterations = 0;
    while (iterations < size)
    {
        iterations++;
        if (iterations <= (int)(size / 2))
        {
            i++;
            std::cout << repeat(size - i, " ");
            std::cout << repeat(i, "* ") << std::endl;
        }
        else
        {
            i--;
            std::cout << repeat(size - i, " ");
            std::cout << repeat(i, "* ") << std::endl;
        }
    }
    return 0;
}