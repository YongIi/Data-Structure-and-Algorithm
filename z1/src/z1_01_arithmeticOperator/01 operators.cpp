#include <iostream>
using namespace std;

// 除法运算
void test01()
{
    int a1 = 10;
    int b1 = 3;

    // 1、两个int相除后还是int类型
    cout << a1 / b1 << endl;

    // 2、除数不可以为0，否则会得出异常的错误
    int b2 = 0;
    // cout << a1 / b2 << endl;

    // 3、两个浮点型数据可以相除
    double d1 = 10.5;
    double d2 = 6.3;
    cout << d1 / d2 << endl;
}

// 取模运算
void test02()
{
    int a1 = 10;
    int b1 = 3;

    cout << a1 % b1 << endl;

    // 取模也不能为0
    int b2 = 0;
    // cout << a1 % b2 << endl;

    // 两个小数是不能取模的
    double d1 = 1.1;
    double d2 = 2.1;
    // cout << d1 % d2 << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}