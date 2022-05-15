#include <iostream>
using namespace std;
int main()
{
    /*
    sizeof关键字,可以显示出 标识符所占用的字节大小
    */

    // 短整型
    short num1 = 10;
    // 整型
    int num2 = 10;
    // 长整型
    long num3 = 10;
    // 长长整形
    long long num4 = 10;

    cout << "短整型num1占用的字节大小为" << sizeof(num1) << endl;
    cout << "整型num2占用的字节大小为" << sizeof(num2) << endl;
    cout << "长整型num3占用的字节大小为" << sizeof(num3) << endl;
    cout << "长长整型num4占用的字节大小为" << sizeof(num4) << endl;
    return 0;
}
