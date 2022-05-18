#include <iostream>
using namespace std;
int main()
{
    /*
      程序流程结构: 跳转语句 break
      作用：终止循环,退出
      常用方式: 1.switch语句中,跳出当前选择判断
               2.单层循环语句中,跳出当前循环
               3.嵌套循环语句中,跳出当前循环所在层的循环,比如在最内层循环体使用break,则跳出最内层循环
    */

    // 常用方式1
    int score = 9;
    switch (score)
    {
    case 10:
        cout << "nice" << endl;
        break;
    case 9:
        cout << "just so so" << endl;
        break;
    default:
        cout << "nothing match";
    }

    // 常用方式2
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        break;
    }

    // 常用方式3
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "j=" << j << endl;
            break;
        }
    }

    return 0;
}