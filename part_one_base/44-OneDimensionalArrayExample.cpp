#include <iostream>
using namespace std;

/*
   一维数组: 选出数组中最大的值
*/

int main()
{

    int arr[] = {10,32,45,22,7};

    int max = arr[0];

    for (int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
        max = arr[i]>max?arr[i]:max;
    }

    cout << max << endl;


    return 0;
}