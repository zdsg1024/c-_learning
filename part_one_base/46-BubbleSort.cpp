#include <iostream>
using namespace std;

/*
   练习: 冒泡排序
*/

int main()
{

    int arr[] = {9, 2, 3, 6, 8, 6, 4};

    int end = sizeof(arr) / sizeof(arr[0]);
    int tmp = arr[0];

    for (int i = 0; i < end - 1; i++)
    {
        for (int j = 0; j < end - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}