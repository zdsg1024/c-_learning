#include <iostream>
using namespace std;
int main()
{
    /* 数据类型: 字符型(char)
       语法：char 变量名称 = '初始值';
       1. 值需要用''(单引号)引起来
       2. char占用1个字节
       3. 计算机将char将对应字符的ascii码保存记录
       4. ascii码值其实是十进制保存,char转换为int即可输出对应的ascii码值

    */

    char ch = 'a';
    cout << "ch=" << ch << endl; // a
    cout << "char类型所占用的字节为:" << sizeof(char) << endl;  // 1
    cout << "字符a在计算机中存储的ascii码为:"<< int(ch) << endl; // 97
    cout << "字符A在计算机中存储的ascii码为:"<< int('A') << endl; // 65

    return 0;
}