#include <iostream>

void func(int a)
{
    std::cout << "func(int a)" << std::endl;
}

void func(int a, int b = 10)
{
    std::cout << "func(int a, int b = 10)" << std::endl;
}

int main()
{
    int a = 10;

    func(20);// 函数重载出现二义性，现在走那个函数都可以。编译无法通过

    return 0;
}

/*编译结果
error: call of overloaded ‘func(int)’ is ambiguous
*/