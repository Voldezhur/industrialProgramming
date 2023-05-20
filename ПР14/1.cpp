#include <iostream>
#include <stdexcept>

float divide(float a, float b)
{
    if(b == 0)
    {
        throw std::runtime_error("Division error: Cannot divide by zero");
    }

    return a / b;
}

int main()
{
    float a, b, c;

    std::cout << "Input numerator: ";
    std::cin >> a;

    std::cout << "Input denominator: ";
    std::cin >> b;

    try
    {
        c = divide(a, b);
        std::cout << "Division result: " << c << '\n';
    }
    catch(std::runtime_error& e)
    {
        std::cout << "\nException\n" << e.what() << '\n';
    }
    
}