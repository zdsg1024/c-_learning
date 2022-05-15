#include <iostream>
// 教程说string的头文件需要添加,但是不添加也可以运行,也不报错,不确定iostream里面包含哪些内容
#include <string>
using namespace std;
int main()
{
    /*
       字符串类型
       两种风格：
       1. c语言风格: char 变量名[] = "字符串值";
       2. c++风格:  string 变量名 = "字符串值";
    */

    char ch[] = "abc";
    cout << "ch=" << ch << endl;

    string s1 = "hello word";
    cout << "s1=" << s1 << endl;
    return 0;
}