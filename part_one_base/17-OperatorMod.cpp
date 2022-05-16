#include <iostream>
using namespace std;
int main()
{
    /*
      运算符：取模运算 mod
      换个解释,就是取余数
    */
    
    int a = 10;
    int b =3;
    cout << a%3 << endl; // 1

    // 两个小数是不允许做取模运算的
    double d1 = 3.14;
    double d2 = 1.1;
    // 如下这种写法是错误的
    // cout << d1 % d2 << endl;
    

    return 0;
}