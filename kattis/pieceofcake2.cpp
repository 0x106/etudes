// Problem: https://open.kattis.com/problems/pieceofcake2
//  Author: Jordan Campbell
//    Date: 01 October 2020
//    File: etudes/kattis/pieceofcake2.cpp

#include <iostream>

int main(int argc, char **argv)
{
    int h, v, x;
    std::cin >> x >> h >> v;

    std::cout << 4 * std::max(h, x - h) * std::max(v, x - v) << std::endl;

    return 0;
}
