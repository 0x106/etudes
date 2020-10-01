// Problem: https://open.kattis.com/problems/pot
//  Author: Jordan Campbell
//    Date: 01 October 2020
//    File: etudes/kattis/pot.cpp

#include <iostream>
#include <vector>
#include <cmath>

int main(int argc, char **argv)
{
    int N, result = 0;
    std::cin >> N;

    std::string tmp;
    while (N-- > 0)
    {
        std::cin >> tmp;
        int base = stoi(tmp.substr(0, tmp.size()-1));
        int exp = stoi(tmp.substr(tmp.size()-1));
        result += std::pow(base, exp);
    }

    std::cout << result << std::endl;

    return 0;
}
