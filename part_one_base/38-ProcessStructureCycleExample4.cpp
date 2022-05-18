#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    /*
      程序流程结构: 循环结构
      练习: 嵌套循环打印出惩罚口诀表
    */

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << '*' << i << '=' << i * j << ' ';
        }
        cout << endl;
    }

    return 0;
}