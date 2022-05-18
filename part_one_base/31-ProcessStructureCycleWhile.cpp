#include <iostream>
using namespace std;
int main()
{
    /*
      程序流程结构: 循环结构
      语法： while (循环条件) {循环体}
    */

    int a = 1;
    int sum = 0;
    while (a <= 10)
    {
        sum += a;
        a += 1;
    }
    cout << "1 add to 10 value is:" << sum << endl;

    return 0;
}