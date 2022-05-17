#include <iostream>
using namespace std;

/*
 1、取数位
 获取一个三位数的个位与十位与百位

 思路分析：
 获得个位：整数本身使用 % 模 10
 获得十位：整数本身使用 / 除以 10，再使用 % 模10
 获得十位：整数本身使用 % 模100，再使用/除以10
 获得百位：整数本身使用 / 除以 100
*/

void test01()
{
    int n;
    cout << "输入一个三位数：" << endl;
    cin >> n;
    cout << "个位：" << n % 10 << endl;
    cout << "十位：" << (n / 10) % 10 << endl;
    cout << "十位：" << n % 100 / 10 << endl;
    cout << "百位：" << n / 100 << endl;
}

/*
 2、数位和
 输入一个不超过int类型的整数，求各个位上数字之和

 思路分析：
 当前数字不断进行取个位和去个位操作，直至数字为0
*/
void test02()
{
    int n;
    int sum = 0;

    cout << "输入一个不超过int类型的整数：" << endl;
    cin >> n;
    while (n)
    {
        sum += n % 10; //取个位
        n /= 10;       //去个位
    }
    cout << "各个位上数字之和为：" << sum << endl;
}

/*
 3、反转数字
 输入一个不超过int类型的整数n，求反转后的数字

 思路分析：
 创建保存结果变量res，初始化 0
 将res乘以10 + 该数字n的个位
 n去除个位,循环执行上一步，直至该数字为0
*/
void test03()
{
    int n;
    int res = 0;

    cout << "输入一个不超过int类型的整数：" << endl;
    cin >> n;
    while (n)
    {
        res = 10 * res + n % 10; //乘以10是扩位，再加上个位
        n /= 10;                 //去个位
    }
    cout << "反转后的数字为：" << res << endl;
}

int main()
{
    test01();
    test02();
    test03();
    return 0;
}