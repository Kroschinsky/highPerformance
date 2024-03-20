#include "Move.h"

void MoveContainer::showMove()
{
    auto vec = std::vector<std::string>();
    vec.push_back("salt");

    // a : 1 element : salt
    auto a = MoveContainer("a", vec);

    // b : 2 elements : salt / pepper
    vec.push_back("pepper");
    auto b = MoveContainer("b", vec);

    // c : 3 elements : salt / pepper / oregano
    vec.push_back("oregano");
    auto c = MoveContainer("c", vec);
    
    vec.push_back("oil");

    a.print();
    b.print();
    c.print();
}

void MoveContainer::showSwap()
{
    auto vec = std::vector<std::string>();
    vec.push_back("salt");

    auto a = MoveContainer("a", vec);

    vec.push_back("pepper");
    auto b = MoveContainer("b", vec);

    a.print();
    b.print();

    std::swap(a, b);

    a.print();
    b.print();
}

void MoveContainer::print()
{
    std::cout << m_name << " : [" << m_strings.size() << "] elements - ";
    for (auto& s : m_strings)
        std::cout << s << " ";

    std::cout << std::endl;
}
