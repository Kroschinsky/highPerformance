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
#include "Button.h"
#include "LambdaObject.h"


int main(int argc, char* argv[])
{
    //MoveContainer::showMove();
    //MoveContainer::showSwap();

    // a become "" and resource go to b
    //std::string a = "stringA";
    //auto b = std::move(a);

    //BufferMove::showCopy();

    //Button::showCase();

    {
        int x = 3;
        auto is_above = [x](int y) { return y > x; };
        auto test = is_above(5);
        std::cout << test << std::endl;
    }

    {
        int x = 3;
        auto is_above = LambdaObjectValue(x);
        auto test = is_above(5);
        std::cout << test << std::endl;
    }


    return 0;
}