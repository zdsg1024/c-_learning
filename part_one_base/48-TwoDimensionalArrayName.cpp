#include <iostream>
using namespace std;

/*
   二维数组: 数组名称的用途
   1. 统计整个数组在内存中的长度
   2. 获取数组在内存中的首地址
*/

int main()
{

    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    cout << sizeof(arr) << endl; // 24个字节

    cout << sizeof(arr[0]) << endl; // int类型某行所占用的内存空间 12个字节

    cout << sizeof(arr[0][0]) << endl; // int类型某个元素所占用的内存空间 4个字节

    cout << "二维数组中行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "二维数组中列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    cout << arr << endl;                // 数组在内存中的首地址
    cout << (long long int)arr << endl; // 转换为10进制显示  140732679251632

    cout << &arr[0] << endl;                // 数组中第一行的首地址
    cout << (long long int)&arr[0] << endl; // 数组中第一行的首地址 10进制显示  140732679251632

    cout << (long long int)&arr[1] << endl; // 数组中第二行的地址 10进制显示  140732679251644

    return 0;
}