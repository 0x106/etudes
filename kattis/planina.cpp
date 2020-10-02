// Problem: https://open.kattis.com/problems/planina
//  Author: Jordan Campbell
//    Date: 01 October 2020
//    File: etudes/kattis/planina.cpp

#include <iostream>
#include <cmath>

int main(int argc, char **argv)
{
    float N = 0;
    std::cin >> N;

    // check that N is a number
    if (std::cin.fail())
        return 0;

    // check that N is an integer
    if ((int)N != N)
        return 0;

    // Can't do negative iterations
    if (N < 0)
        return 0;

    // On every iteration we add N-1 points along a row 
    // (which we then need to square).
    std::cout << (int)std::pow((int)std::pow(2, N)+1, 2) << std::endl;

    return 0;
}
