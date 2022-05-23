#include <iostream>
using namespace std;
int main()
{
    /*
      数组:
      定义：一个集合,里面存放了相同类型的数据元素
        特点1:数组中每个数据元素都是相同的数据类型
        特点2:数组是由连续的内存位置组成的

      一维数组的定义方式：
      1.数据类型 数组名称[数组长度];
      2.数据类型 数组名称[数组长度]={value1,value2...};
      3.数据类型 数组名称[] ={value1,value2...};
    */

    // 方式1
    int arr[3];
    arr[0] = 1;
    cout << arr[0] << endl; // 1
    // 方式2
    int arr2[3] = {1,2};
    cout << arr2[0] << endl; // 1
    cout << arr2[1] << endl;  // 2
    // 这种方式,默认值为0
    cout << arr2[2] << endl; // 0
    // 方式3
    int arr3[] = {1,2};
    // 可以看到数组长度为2
    cout << sizeof(arr3)/sizeof(arr3[0]) << endl; // 2

    return 0;
}