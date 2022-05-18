#include <iostream>
using namespace std;
int main()
{
    /*
      程序流程结构: 循环结构
      语法： do {循环体} while (循环条件);
      与while的区别, do while 先执行一次循环体，再判断循环条件；while先判断循环条件,再执行循环体
    */

    int a = 1;
    int sum = 0;

    do
    {
        sum += a;
        a += 1;
    } while (a <= 10);

    cout << "1 add to 10 value is:" << sum << endl;

    return 0;
}