#include <iostream>
#include <string>
using namespace std;

/*
方法四

思路分析：
*   每一个5的倍数都可以至少贡献出 **1个** 5因子
*   每一个25的倍数都可以至少贡献出 **2个** 5因子
*   每一个125的倍数都可以至少贡献出 **3个** 5因子
*   阶乘末尾0   ->   贡献1个5因子个数 + 贡献2个5因子个数 +  贡献3个5因子个数 + . . . + 贡献n个5因子个数


**举例：**

求 56！ 末尾0的个数

*   56 / 5 = 11   提供至少1个5因子的数有11个：5，10，15，20，25，30，35，40，45，50，55
*   11 / 5 = 2    提供至少2个5因子的数有2个：25，50
*   2 / 5 = 0     提供至少3个5因子的数有0个

结果为： `11 + 2 = 13个`

优点：代码简洁，复杂度低
*/

void test01()
{
    int n;
    cout << "请输入一个正整数：" << endl;
    cin >> n;
    int temp = n;
    int res = 0;

    // while (temp / 5 != 0)
    while (temp) // 一般将a不等于0的判断直接给为a，甚至可以把a的表达式简化，例如这里将 temp/5 != 0 简化为 temp
    {
        res += temp / 5;
        temp /= 5;
    }

    cout << n << "!末尾0的个数是：" << res << endl;
}

int main()
{
    test01();
    return 0;
}