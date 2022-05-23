#include <iostream>
using namespace std;

/*
   一维数组: 数组逆置
*/

int main()
{

    int arr[] = {10,32,45,22,7};

    int end = sizeof(arr)/sizeof(arr[0])-1;

    int tmp = arr[0];

    for (int i=0,j=end;i<j;i++,j--){
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    for (int i=0;i<=4;i++){
        cout << arr[i]<<" ";
    }


    return 0;
}