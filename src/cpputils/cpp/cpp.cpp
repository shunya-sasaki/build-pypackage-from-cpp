#include <iostream>
#include <pybind11/pybind11.h>

int hello()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

// template <typename T>
// T add(T a, T b)
// {
//     return a + b;
// }

PYBIND11_MODULE(cpputils, m)
{
    m.doc() = "pybind11 example plugin"; // optional module docstring
    m.def("hello", &hello, "A function which prints Hello, World!");
    // m.def("add", &add<int>, "A function which adds two numbers");
}
