#include <iostream>

/* 第一种情况 ============   */

// int main()
// {
//     // int &ref = 10; // 错误写法，非 常量 引用的初始值必须为左值, 编译器报错
//     /*
//     error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’
//     */

//     // const int &ref = 10; // 正确写法，相当于下面一行的写法
//     int tmp = 10; const int &ref = tmp; // 此时 ref不可修改 如果ref = 20;编译会报错
//     return 0;
// }



/* 第二种情况 ============   */
void print(const int &a) // 防止传入数据被修改
{
    a = 100;
    std::cout << "a =" << a << std::cout;
}

int main()
{
    int tmp = 10;
    print(tmp);
    return 0;
}

