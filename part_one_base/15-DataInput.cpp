#include <iostream>
using namespace std;
int main()
{
    /*
      数据输入: 关键字 cin
      语法: cin >> 变量名称
    */

    int a = 0;
    cout << "a=" << a << endl;  // 0
    cout << "请给整形变量a赋值:";
     cin >> a;
    cout << "a=" << a << endl;  // 显示自定义输入的值
    

    return 0;
}