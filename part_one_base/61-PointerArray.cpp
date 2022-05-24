#include <iostream>
using namespace std;


/*
   结合指针和数组,通过指针累访问数组中的元素
*/

int main(){

    int arr[6] = {1,2,3,4,5,6};
    // 指针指向数组的首地址
    int * p = arr;
    cout << *p << endl;  // 1

    // 指针指向数组的第四个元素
    p = &arr[3];
    cout << *p << endl;  // 4

    // 指针指向下一个地址,即数组的第五个元素
    p = p + 1;
    cout << *p << endl; // 5

    // 通过指针循环输出数组的值
    // c++中数组可以越界,这是需要注意的点,所以不能用指针为空去判断数组循环终止的条件
    int i = 1;
    int * q = arr;
    while (i<=6){
        cout << *q << endl;
        q++;
        i++;
    }





}