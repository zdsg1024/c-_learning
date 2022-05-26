#include <iostream>
using namespace std;

/*
   c++ 核心编程: 面向对象
   程序的内存模型,在c++中,将内存分为四个区域
   1.代码区:存放函数体的二进制代码,由操作系统进行管理
   2.全局区:存放全局变量和静态变量以及常量
   3.栈区: 由编译器自动分配释放,存放函数的参数值,局部变量等
   4.堆区: 由程序员分配和释放,若程序员不释放,程序结束时由操作系统回收
*/

/*
程序运行之前,编译之后生成exe可执行程序
全局区：--全局变量,静态变量以及常量存放在此
   1.全局区的数据在程序运行结束后由程序自动回收

通过以下运行的地址结果可以看出:
在全局区中的数据：全局变量,静态变量,const修饰的全局常量
*/

// 全局变量
int a1 = 10;
int b1 = 10;

// const修饰的全局常量
const int a3 = 10;

int main()
{

    // 局部变量
    int a = 10;
    cout << "局部变量a的地址:" << (long long int)&a << endl;

    // 全局变量
    cout << "全局变量a1的地址:" << (long long int)&a1 << endl;

    // 静态变量
    static int a2 = 10;
    cout << "静态变量a2的地址:" << (long long int)&a2 << endl;

    // 常量
    // 字符串常量
    cout << "字符串常量的地址:" << (long long int)&"hello" << endl;
    // const修饰的全局常量
    cout << "const修饰的全局常量a3的地址:" << (long long int)&a3 << endl;
    // const修饰的局部常量
    const int a4 = 10;
    cout << "const修饰的局部常量a4的地址:" << (long long int)&a4 << endl;

    return 0;
}