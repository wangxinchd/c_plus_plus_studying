#include <iostream>

void func(int &a)
{
    std::cout << "func(int &a)" << std::endl;
}

void func(const int &a)
{
    std::cout << "func(const int &a)" << std::endl;
}

int main()
{
    int a = 10;
    func(a); // 走第一个函数，因为a 是一个变量

    func(20);// 走第二个函数，因为 const int &a = 20这样写才合法， int &a = 20 不合法

    return 0;
}

/*输出结果
func(int &a)
func(const int &a)
*/