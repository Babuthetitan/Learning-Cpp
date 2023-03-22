// Hello.cpp  
// This is me learning C++
// I am extremely proud of myself for going up this learning curve
// include <iostream> = a normal C++ library that means input and output stream
// int main() is where one stores all the code they want to run with the more complx brackets at the end 
// int = integer, which is a whole number
// variable = used as a variable/placeholder for something
// std = standard namespace C++ library
// cout= standard output stream that prints data to the (console out)
// float= used to declare decimal type numbers
// double= similar to float with more precision 
//string= a list of characters
//functions= used to do actions.....return type,function name

#include <iostream>

int add(int a, int b)
{
    return a + b;
}

float subtract(int a, int b)
{
    return a - b;
}

float divide(float a, float b)
{
    return a / b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int a = 5;
    int b = 2;

    int answer = add(a, b);
    float answer2 = subtract (a, b);
    float answer3 = divide (a, b);
    int answer4 = multiply ( a, b);

    std::cout << answer << std::endl;
    std::cout << answer2 << std::endl;
    std::cout << answer3 << std::endl;
    std::cout << answer4 << std::endl;
}
