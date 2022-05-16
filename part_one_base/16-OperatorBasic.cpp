#include <iostream>
using namespace std;
int main()
{
    /*
      运算符：加减乘除
    */

    int a = 10;
    // add
    a = 10*2;
    // subtract
    a = a - 2;
    // multiply
    a = a * 2;
    // div
    a = a / 5;
    cout << "a=" << a << endl;  // 7


    // 小数之间可以做除法运算,并且运算的结果如果是小数,会保留小数，不会强制保留整数
    cout << 4.0/2.3 << endl;
    

    return 0;
}