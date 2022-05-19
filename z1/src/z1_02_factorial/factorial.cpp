#include <iostream>
#include <string>
using namespace std;

/*
阶乘
一个正整数的**阶乘**是所有小于及等于该数的正整数的积

公式：
 n!= 1 × 2 × 3 × . . . × ( n - 1 ) × n
 n! = n * (n - 1)!
 0! = 1
*/

// 1 求阶乘
void test01()
{
    int n;
    cout << "输入一个整型数据：" << endl;
    cin >> n;
    long long res = 1; // 20的阶乘就超过int存储的范围了

    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    cout << n << "! = " << res << endl;
}

// 2 阶乘的第二种解法
void test02()
{
    // 求n的阶乘
    int n;
    cout << "输入一个小于100的整型数据：" << endl;
    cin >> n;

    /*
    long long arr[100] = {0}; //如果初始化数据时没有填写完，编译器会用0补全
    arr[0] = 1;
    */

    long long arr[100] = {1}; //如果初始化数据时没有填写完，编译器会用0补全

    // 利用下标i 保存下标i对应数字阶乘的结果 到下标对应的arr[i]中
    for (int i = 1; i <= n; i++)
    {
        arr[i] = arr[i - 1] * i;
    }
    cout << n << "! = " << arr[n] << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}