#include <iostream>
#include <string>
using namespace std;

/*
 阶乘末尾零的个数
 求n！末尾所含0的个数

 5! =  120               末尾1个0
 15! =  1307674368000    末尾3个0

*/

// 方法1
// 以下方法有个缺点：
// long long表示范围2^63-1(19位数)，21！已到20位，溢出后无法准确计算
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

    int count = 0; //计数变量
    while (res % 10 == 0)
    {
        count++;   //统计0的个数
        res /= 10; //去个位
    }
    cout << n << "!末尾0的个数为：" << count << endl;
}

int main()
{
    test01();
    return 0;
}