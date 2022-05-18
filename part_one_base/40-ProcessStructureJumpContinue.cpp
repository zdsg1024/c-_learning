#include <iostream>
using namespace std;
int main()
{
    /*
      程序流程结构: 跳转语句 continue
      作用: 在循环语句中，跳过本次循环未执行的部分, 进入下一次循环
    */

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}