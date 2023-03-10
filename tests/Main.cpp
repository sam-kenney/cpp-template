#include "../src/Calculate.cpp"
#include "Test.hpp"

int main()
{
    Test::assert(Calculate::sum(1, 2) == 3,
                 __LINE__);
    Test::assert(Calculate::sum(7, 4) == 11,
                 __LINE__);
    Test::assert(Calculate::sum(1, 2) != 4,
                 __LINE__);

    return 0;
}
