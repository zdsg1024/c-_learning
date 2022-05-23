#include <iostream>
using namespace std;
int main()
{
    /*
      数组: 二维数组
      定义：
      二维数组的定义方式：
      1.数据类型 数组名称[数组行数][数组列数];
      2.数据类型 数组名称[数组行数][数组列数]={{数据1,数据2},{数据3,数据4}};
      3.数据类型 数组名称[数组行数][数组列数]={数据1,数据2,数据3,数据4};
      4.数据类型 数组名称[][数组列数]={数据1,数据2,数据3,数据4};
    */

    // 方式1
    int arr1[2][3];
    arr1[0][1] = 1;
    cout << arr1[0][1] << endl; // 1
    // 方式2
    int arr2[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    // 方式3
    int arr3[2][3] = {1,2,3,4,5,6};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    // 方式4
    int arr4[][3] = {1,2,3,4,5,6,7,8};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr4[i][j] << " ";
        }
        cout << endl;
        // 默认的值为0
    }


    return 0;
}