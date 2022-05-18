#include <iostream>
using namespace std;
int main()
{
    /*
      程序流程结构: 跳转语句 goto
      语法：goto 标记
      目标的标记需要:结尾
      解释: 如果标记存在,那么跳转到目标行,如果不存在,则不跳转
    */

    int a = 10;
    // 跳转到标记b所在的行
    goto b;
    cout << a << endl;
    // 这就是一个标记
    b:
    cout << "123" << endl;

    return 0;
}