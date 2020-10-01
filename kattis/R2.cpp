// Problem: https://open.kattis.com/problems/r2
//  Author: Jordan Campbell
//    Date: 01 October 2020
//    File: etudes/kattis/R2.cpp

#include <iostream>

int main(int argc, char **argv)
{
    int R1, R2, S;
    std::cin >> R1 >> S;
    R2 = 2 * S - R1;
    std::cout << R2 << std::endl;
    return 0;
}
