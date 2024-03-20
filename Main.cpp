#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <cmath>
#include <climits>


#include "Move.h"
#include "BufferMove.h"


int main(int argc, char* argv[])
{
    //MoveContainer::showMove();
    //MoveContainer::showSwap();

    // a become "" and resource go to b
    std::string a = "stringA";
    auto b = std::move(a);

    BufferMove::showCopy();

    return 0;
}