#include <iostream>
using namespace std;
int main()
{
    /*
      运算符：三目运算符
      语法： 表达式1？表达式2:表达式3
      如果表达式1为真 那么执行表达式2,否则执行表达式3
    */

    int a = 2 > 1 ? 4 : 6;
    cout << a << endl;

    return 0;
}