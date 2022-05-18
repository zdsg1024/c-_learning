#include <iostream>
using namespace std;
int main()
{
    // 数据类型-整型
    /*
    1. 短整型 short 2字节
    2. 整型 int 4字节
    3. 长整型 long 4字节(windows) 4字节(linux(32位)) 8字节(linux(64位))
    4. 长长整型 long long 8字节
    */

    // 短整型
    short num1 = 10;
    // 整型
    int num2 = 10;
    // 长整型
    long num3 = 10;
    // 长长整形
    long long num4 = 10;

    cout << "短整型num1=" << num1 << endl;
    cout << "整型num2=" << num2 << endl;
    cout << "长整型num3=" << num3 << endl;
    cout << "长长整型num4=" << num4 << endl;
    return 0;
}
