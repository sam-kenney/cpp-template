#include "Test.hpp"

void Test::assert(bool condition, int lineNumber)
{
    if (!condition)
    {
        std::string error = std::string(__func__) + std::string(" failed at line ") + std::to_string(lineNumber) + "!";
        throw std::runtime_error(error);
    }
}
