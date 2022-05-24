#include <iostream>
using namespace std;

/*
    野指针: 指针指向一个非法的内存地址即为野指针
*/

int main()
{
    // 在没有申请0x1100这个内存地址的情况下,直接进行使用,是不正确的,要避免该使用的方式
    int * p = (int *)0x1100;
    cout << *p << endl;

    return 0;
}