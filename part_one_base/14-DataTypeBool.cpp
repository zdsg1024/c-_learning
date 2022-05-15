#include <iostream>
using namespace std;
int main()
{
    /*
       bool数据类型
       语法：
       1. bool 变量名称 = true/false;
       2. bool 变量名称 = 1/0;
       注意: 实际存储的值为1或0,所以bool类型实际占用的空间大小为1个字节
    */

    bool flag = true;
    bool flag2 = 0;
    cout << "flag=" << flag << endl;  // 1
    cout << "flag2=" << flag2 << endl; // 0
    // 所占用的空间大小
    cout << "bool类型占用的空间大小为：" << sizeof(true) << endl; // 1
    return 0;
}