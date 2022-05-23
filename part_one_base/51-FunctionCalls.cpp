#include <iostream>
using namespace std;

/*
   函数的调用:
   语法: 函数名(参数)

*/

/*
定义一个函数,返回两个数字之和
*/
int add(int num1, int num2)
{
    // num1 和 num2称为形参
    int sums = num1 + num2;
    return sums;
}

int main()
{

    // a 和 b称为实参
    int a = 1;
    int b = 2;
    // 函数调用  --函数调用会将实参的值传递给形参
    int c = add(a, b);
    cout << "sum = " << c;
    return 0;
}