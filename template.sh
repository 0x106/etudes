#! /bin/bash

FILE=$1

cat > kattis/$FILE.cpp <<- EOM
// Problem: https://open.kattis.com/problems
//  Author: Jordan Campbell
//    Date: 01 October 2020
//    File: etudes/kattis/${FILE}.cpp

#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "${FILE}" << std::endl;
    return 0;
}
EOM

# some problems may require custom compilation, so just define per-problem
# compile scripts
cat > compile/$FILE.sh <<- EOM
#! /bin/bash

# Problem: https://open.kattis.com/problems
#  Author: Jordan Campbell
#    Date: 01 October 2020
#    File: etudes/compile/${FILE}.sh

clang++ -std=c++2a kattis/${FILE}.cpp -o bin/${FILE}

EOM

# open file for editing
code kattis/${FILE}.cpp

# change permissions
chmod +x compile/${FILE}.sh

# compile template stub
compile/${FILE}.sh

# test execute file
bin/${FILE}
