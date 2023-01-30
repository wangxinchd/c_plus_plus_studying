// #include <iostream>

// int func(int a = 10, int b = 20);

// int func(int a = 10, int b = 20) // 编译报错
// {
//     return a+b;
// }

// int main()
// {
//     int c = func();

//     std::cout << "c = " << c << std::endl;
//     return 0;
// }

/* 输出结果

error: default argument given for parameter 1 of ‘int func(int, int)’ [-fpermissive]
 int func(int a = 10, int b = 20)

*/

// 函数声明和函数实现只能有一个有默认参数


#include <iostream>

int func(int a = 10, int b = 20);

int func(int a, int b) // 这样写就不会有问题
{
    return a+b;
}

int main()
{
    int c = func();

    std::cout << "c = " << c << std::endl;
    return 0;
}
