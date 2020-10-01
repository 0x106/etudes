// Problem: https://open.kattis.com/problems/carrots
//  Author: Jordan Campbell
//    Date: 01 October 2020
//    File: etudes/kattis/carrots.cpp

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    int N = 0;
    int P = 0;

    try
    {
        std::string _;
        std::cin >> N >> P;

        // Likely not strictly necessary, but not sure if it 
        // expects to read the whole file before writing output.
        for (int i = 0; i < N; ++i)
            std::cin >> _;
    }
    catch (const std::exception &exp)
    {
        return 0;
    }

    std::cout << P << std::endl;

    return 0;
}
