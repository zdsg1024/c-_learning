#include <iostream>
using namespace std;
int main()
{
    /* 数据类型: 实型(浮点型)
       语法：数据类型 变量名称 = 初始值;
       1. 单精度 float
       2. 双精度 double
       注意：默认情况下,编辑器会把小数识别为双精度double类型
       所以定义单精度float变量的时候,需要加上f结尾

       默认输出一位小数只显示6位有效数字
    */

    float f1 = 3.14f;
    float f2 = 3.14159265f;
    cout << "f1=" << f1 << endl; // 3.14
    cout << "f2=" << f2 << endl; // 3.14159

    double d1 = 3.14;
    double d2 = 3.14159265;

    cout << "d1=" << d1 << endl;  // 3.14
    cout << "d2=" << d2 << endl;  // 3.14159
    // cout.precision 可以设置输出保留的有效数字
    cout.precision (8);
    cout << "d2=" << d2 << endl;  // 3.1415927


    // 科学计数法
    float f3 = 3e2f;  // 3*10^2
    float f4 = 3e-2f;  // 3*10^(-2) = 3*0.1^2
    cout.precision(3);
    cout << "f3=" << f3 << endl;  // 300
    cout << "f4=" << f4 << endl;  // 0.03


    // 所占字节
    cout << "float所占用的字节为：" << sizeof(float) << endl;  //4
    cout << "double所占用的字节为：" << sizeof(double) << endl;  //8
    


    return 0;
}