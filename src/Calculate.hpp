#ifndef CALCULATE_HPP
#define CALCULATE_HPP

/// @brief Isolate calculation functions in a namespace to
/// avoid name collisions with the std lib functions.
namespace Calculate
{
    /// @brief Sum two integers.
    /// @param a The first integer.
    /// @param b The second integer.
    /// @return The sum of the two integers.
    int sum(int a, int b);
}

#endif // CALCULATE_HPP
