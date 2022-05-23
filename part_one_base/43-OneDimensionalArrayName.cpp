#include <iostream>
using namespace std;

/*
   一维数组: 数组名称的用途
   1. 统计整个数组在内存中的长度
   2. 获取数组在内存中的首地址
*/

int main()
{

    int arr[] = {1, 2, 3};

    cout << sizeof(arr) << endl; // 12个字节

    cout << sizeof(arr[0]) << endl; // int类型某个元素所占用的内存空间 4个字节

    cout << "数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

    cout << arr << endl; // 数组在内存中的首地址
    cout << (long long int)arr << endl; // 转换为10进制显示

    cout << &arr[0] << endl; // 数组中第一个元素的地址
    cout << (long long int)&arr[0] << endl; // 数组中第一个元素的地址 10进制显示  140732825233084

    cout << (long long int)&arr[1] << endl; // 数组中第二个元素的地址 10进制显示  140732825233088


    return 0;
}