#include <iostream>
using namespace std;
int main()
{
    /*
      程序流程结构: 循环结构
      嵌套循环 打印正方体
    */

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }

    return 0;
}