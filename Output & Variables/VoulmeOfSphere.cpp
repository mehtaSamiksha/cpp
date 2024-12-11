#include <iostream>
int main()
{
    double radius;
    std::cin >> radius;
    double volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;
    std::cout << volume;
    return 0;
}
