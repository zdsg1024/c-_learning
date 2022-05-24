#include <iostream>
using namespace std;

/*
    空指针：指针变量指向内存中编号为0的空间
    用法：初始化指针变量
    注意：空指针指向的内存是不可以访问的
*/

int main()
{

    // 定义一个空指针
    int *p = NULL;

    // 输出空指针指向的地址
    cout << "空指针指向的地址为:" << p << endl;

    // 访问空指针指向的内存,期待报错
    cout << *p << endl;

    return 0;
}