#include <iostream>
using namespace std;
#define var1 10  //(注意:后面不需要分号结尾)

// 常量是不可以被修改的

/*
常量的定义1:  宏常量
语法： #define 常量名 常量值
定义位置： 通常在文件上方定义,表示一个常量
*/
int main()
{
    // 常量的定义2 const 修饰的变量
    // 语法：const 数据类型 变量名称 = 初始值;
    const int a = 10;

    
    cout << "常量var1=" << var1 << endl;
    cout << "常量a=" << a << endl;
    return 0;
}