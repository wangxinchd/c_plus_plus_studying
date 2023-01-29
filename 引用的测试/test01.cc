#include <iostream>

int& test_a()
{
    int a = 10;
    return a;
}

int main()
{
    int &ref = test_a();

    std::cout << "ref = " << ref << std::endl;
    std::cout << "ref = " << ref << std::endl;

    return 0;
}

// 测试引用返回局部变量的情况
// g++ test01.cc

/* 输出结果

Segmentation fault (core dumped)

*/

// 如果是win系统，可能出现第一次输出10，第二次乱码的情况