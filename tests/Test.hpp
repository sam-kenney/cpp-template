#ifndef TEST_HPP
#define TEST_HPP

#include <string>
#include <stdexcept>

/// @brief Namespace for testing functions.
namespace Test
{
    /// @brief Assert that a boolean condition is true.
    /// @param condition The condition to assert. (i.e 1 + 1 == 2)
    /// @param lineNumber The __LINE__ number of the assert.
    void assert(bool condition, int lineNumber);
}

#endif // TEST_HPP
