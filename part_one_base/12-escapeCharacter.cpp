#include <iostream>
using namespace std;
int main()
{
    /* 转义字符
      常用的转义字符:
      1.换行符 \n
      2.反斜杠 \\
      3.水平制表符 \t
    */

    int a = 10;
    // c++中endl就相当于\n  以下两种写法是等价的
    cout << "a=" << a << endl;
    cout << "a=" << a << "\n";

    // 反斜杠输出
    cout << "hello\\ word\n";

    // 水平制表符 \t输出
    cout << "hello\tword" << endl;

    
    return 0;
}