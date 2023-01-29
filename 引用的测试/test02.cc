#include <iostream>

int& test_a()
{
    static int a = 10;
    return a;
}

int main()
{
    int &ref = test_a();

    std::cout << "ref = " << ref << std::endl;
    std::cout << "ref = " << ref << std::endl;

    // 引用作为左值
    test_a() = 1000;
    std::cout << "ref = " << ref << std::endl;
    std::cout << "ref = " << ref << std::endl;
    return 0;
}

// 测试引用返回局部变量的情况
// g++ test02.cc
/* 输出结果

ref = 10
ref = 10
ref = 1000
ref = 1000
*/
