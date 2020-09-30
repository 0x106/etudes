// Problem: https://open.kattis.com/problems/timeloop
//  Author: Jordan Campbell
//    Date: 30 September 2020
//    File: etudes/kattis/timeloop.cpp

#include <iostream>

int main(int argc, char **argv)
{
    int N = 0;

    try
    {
        std::cin >> N;
    }
    catch (const std::exception &exp)
    {
        return 0;
    }

    for (int i = 0; i < N; ++i)
        std::cout << i + 1 << " Abracadabra" << std::endl;

    return 0;
}