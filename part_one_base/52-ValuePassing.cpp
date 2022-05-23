#include <iostream>
using namespace std;

/*
   值传递
   解释: 形参发生改变,并不会影响实参的值
*/

/*
定义一个函数，交换两个数的值
*/
void swap(int num1, int num2)
{

    cout << "swap before: num1:" << num1 << " num2:" << num2 << endl;
    int tmp=num1;
    num1=num2;
    num2 = tmp;
    cout << "swap after: num1:" << num1 << " num2:" << num2 << endl;
    return;
}

int main()
{

    // a 和 b称为实参
    int a = 1;
    int b = 2;
    // 函数调用  --函数调用会将实参的值传递给形参
    cout << "swap before: a:" << a << " b:" << b << endl;
    swap(a, b);
    cout << "swap after: a:" << a << " b:" << b << endl;

    return 0;
}